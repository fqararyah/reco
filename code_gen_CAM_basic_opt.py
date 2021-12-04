import numpy as np



pattern_list = []
count = 0
long_patterns_count = 0
pattern_max_len = 0
chunk_size = 1
uniques = []
unique_counts = [0] * 364
for i in range(364):
    uniques.append({})
with open('pattern_match_snort3_content_lt8.txt', 'r') as f:
    for line in f:
        line = line.replace('\n', '')
        pattern_list.append(line)
        for i in range(len(line)):
            if line[i] not in uniques[i]:
                unique_counts[i] += 1
                uniques[i][line[i]] = 'b' + str(i) + '_' + str(unique_counts[i])

        if(len(line) > pattern_max_len):
            pattern_max_len = len(line)

num_of_patterns = len(pattern_list)

pattern_list.sort()

repeated_seqs_6 = {}
repeated_seqs_6_pos = {}
for ii in range(len(pattern_list)):
    line = pattern_list[ii]
    for i in range(0, len(line) - 5, 6):
        subseq = line[i:min(i+6, len(line))]
        subseq += '_' + str(i)
        if subseq not in repeated_seqs_6:
            repeated_seqs_6[subseq] = 0
            repeated_seqs_6_pos[subseq] = []
        repeated_seqs_6[subseq] += 1
        repeated_seqs_6_pos[subseq].append(ii)

repeated_seqs_6_vars = {}
repeated_seqs_6_bool_expressions = {}
positions_repeated_seqs_6 = {}
for seq, repititions in repeated_seqs_6.items():
    if repititions > 1:
        seq_start_indx = int(seq.split('_')[-1])
        var_name = 'seq_' + str(seq_start_indx) + str(repeated_seqs_6_pos[seq][0])
        repeated_seqs_6_vars[seq] = var_name
        repeated_seqs_6_bool_expressions[seq] = (uniques[seq_start_indx][seq[0]] + ' && ' + uniques[seq_start_indx+1][seq[1]] + ' && ' + \
                                                uniques[seq_start_indx+2][seq[2]] + ' && ' + uniques[seq_start_indx+3][seq[3]] + \
                                                ' && ' + uniques[seq_start_indx+4][seq[4]] + ' && ' + uniques[seq_start_indx+5][seq[5]] + ';\n')
        if seq_start_indx not in positions_repeated_seqs_6:
            positions_repeated_seqs_6[seq_start_indx] = {}
        for position in repeated_seqs_6_pos[seq]:
            positions_repeated_seqs_6[seq_start_indx][position] = var_name

specials = {}
specials["'"] = "\\'"
specials['"'] = '\\"'

with open('./patterns_matcher.cpp', 'w') as f:
    f.write('#include "pattern_matcher.h"\n\n\n')

    f.write('void shift(char buffer[buffer_size]){\n')
    f.write('for(int i=0; i< buffer_size - chunk_len; i++){\n')
    f.write('buffer[i] = buffer[i+chunk_len];\n')
    f.write('}\n')
    f.write('}\n\n')

    f.write('void fill(char chunk[chunk_len], char buffer[buffer_size]){\n')
    f.write('for(int i=0;i<chunk_len; i++){\n')
    f.write('buffer[buffer_size - chunk_len + i] = chunk[i];\n')
    f.write('}\n')
    f.write('}\n\n')
    
    f.write('void dummy(bool &matched, int &pattern_id, char buffer[buffer_size]){\n')
    f.write('matched = 1;\n')
    f.write('dummy_loop:for(int i=0; i< buffer_size - chunk_len; i++){\n')
    f.write('pattern_id += buffer[i];\n')
    f.write('}\n')
    f.write('}\n')

    f.write('void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {\n')
    for i in range(len(uniques)):
        unique_map = uniques[i]
        for character, bool_variable_name in unique_map.items():
            if character in specials.keys():
                character = specials[character]
            #f.write('#pragma HLS inline off\n')
            f.write('boolean ' + bool_variable_name + ' =(' 'buffer[' + str(i) + "] == '" + character + "');\n")
    for seq, seq_var in repeated_seqs_6_vars.items():
        #f.write('#pragma HLS inline off\n')
        f.write('boolean ' + seq_var + ' = ' + repeated_seqs_6_bool_expressions[seq])

    for i in range(num_of_patterns):
        f.write('if(')
        j = 0
        while j < len(pattern_list[i]):
            current_char = pattern_list[i][j]
            if j in positions_repeated_seqs_6 and i in positions_repeated_seqs_6[j]:
                f.write(positions_repeated_seqs_6[j][i])
                j += 6
            else:
                f.write(uniques[j][current_char])
                j+= 1
            if j < len(pattern_list[i]):
                f.write(' && ')
            
        f.write(') {\nmatched = true;\npattern_id = ' + str(i) + ';\n}\n')
    f.write('\n}')
import numpy as np



pattern_list = []
count = 0
long_patterns_count = 0
pattern_max_len = 0
chunk_size = 2
uniques = []
unique_counts = [0] * 364
safe_prefixs_poatfixs = [1] * 256
a_safe_prefix_postfix = ''

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
        
        safe_prefixs_poatfixs[ ord(line[0]) ] = 0
        safe_prefixs_poatfixs[ ord(line[len(line) - 1]) ] = 0

        if(len(line) > pattern_max_len):
            pattern_max_len = len(line)

for i in range(256):
    if safe_prefixs_poatfixs[i] == 1:
        a_safe_prefix_postfix = i

num_of_patterns = len(pattern_list)
pattern_list.sort()
print(pattern_list[0])
specials = {}
specials["'"] = "\\'"
specials['"'] = '\\"'

with open('./pattern_matcher.h', 'w') as f:
    f.write('#include "ap_int.h"\n\n\n')

    f.write('#ifndef TDWIDTH\n')
    f.write('#define TDWIDTH 16\n')
    f.write('#endif\n')
    f.write('typedef ap_uint<1> boolean;\n\n')

    f.write("const char a_safe_prefix_postfix = (char)" + str(a_safe_prefix_postfix) + ";\n")
    f.write('const int pattern_max_len = ' + str(pattern_max_len) + ';\n')
    f.write('const int chunk_len = ' + str(chunk_size) + ';\n')
    f.write('const int buffer_size = chunk_len + pattern_max_len;\n')

    f.write('\nvoid match(bool &matched, int *pattern_id, char buffer[buffer_size], int start_indx);\n')
    f.write('void shift_and_fill(ap_uint<DWIDTH> chunk, char buffer[buffer_size], int start_indx);\n')
    f.write('void dummy(bool &matched, int *pattern_id, char buffer[buffer_size]);\n')

with open('./patterns_matcher.cpp', 'w') as f:
    f.write('#include "pattern_matcher.h"\n\n\n')

    f.write('void shift_and_fill(ap_uint<DWIDTH> chunk, char buffer[buffer_size], int start_indx){\n')
    f.write('for(int i=0; i< buffer_size - chunk_len; i++){\n')
    f.write('buffer[i] = buffer[i+chunk_len];\n')
    f.write('}\n')
    f.write('for(int i=0;i<chunk_len; i++){\n')
    f.write('buffer[buffer_size - chunk_len + i] = chunk(start_indx + i, start_indx);\n')
    f.write('}\n')
    f.write('}\n\n')
    
    """ f.write('void dummy(bool &matched, int &pattern_id, char buffer[buffer_size]){\n')
    f.write('matched = 1;\n')
    f.write('dummy_loop:for(int i=0; i< buffer_size - chunk_len; i++){\n')
    f.write('pattern_id += buffer[i];\n')
    f.write('}\n')
    f.write('}\n') """
    
    for i in range(len(uniques)):
        unique_map = uniques[i]
        for character, bool_variable_name in unique_map.items():
            if character in specials.keys():
                character = specials[character]
            f.write('boolean ' + bool_variable_name + ';\n')

    f.write('void match(bool &matched, int *pattern_id, char buffer[buffer_size], int start_indx) {\n')
    f.write('for(int i=0; i<chunk_len; i++){\n')
    for i in range(len(uniques)):
        unique_map = uniques[i]
        for character, bool_variable_name in unique_map.items():
            if character in specials.keys():
                character = specials[character]
            f.write(bool_variable_name + ' =(' 'buffer[i + ' + str(i) + "] == '" + character + "');\n")
        
    for i in range(num_of_patterns):
        f.write('if(')
        for j in range(len(pattern_list[i])): 
            current_char = pattern_list[i][j]
            f.write(uniques[j][current_char])
            if j < len(pattern_list[i]) - 1:
                f.write(' && ')
        f.write(') {\nmatched = true;\n')
        f.write('pattern_id [start_indx]= ' + str(i) + ';\n')
        f.write('}\n')
    
    f.write('}\n')
    f.write('\n}')
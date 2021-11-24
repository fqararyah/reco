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
with open('pattern_match_snort3_content.txt', 'r') as f:
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

    f.write('void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {\n')
    for i in range(len(uniques)):
        unique_map = uniques[i]
        for character, bool_variable_name in unique_map.items():
            if character in specials.keys():
                character = specials[character]
            f.write('boolean ' + bool_variable_name + ' =(' 'buffer[' + str(i) + "] == '" + character + "');\n")
        
    for i in range(num_of_patterns):
        f.write('if(')
        for j in range(len(pattern_list[i])): 
            current_char = pattern_list[i][j]
            f.write(uniques[j][current_char])
            if j < len(pattern_list[i]) - 1:
                f.write(' && ')
        f.write(') {\nmatched = true;\npattern_id = ' + str(i) + ';\n}\n')
    f.write('\n}')
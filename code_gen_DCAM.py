import numpy as np



pattern_list = []
count = 0
long_patterns_count = 0
pattern_max_len = 0
chunk_size = 1
chars_rls = {}

with open('pattern_match_snort3_content.txt', 'r') as f:
    for line in f:
        line = line.replace('\n', '')
        pattern_list.append(line)
        current_pattern_len = len(line)
        for i in range(current_pattern_len):
            current_char = line[i]
            current_char_reg_len = current_pattern_len - i - 1
            if current_char not in chars_rls:
                 chars_rls[current_char] = current_char_reg_len
            chars_rls[current_char] = max(chars_rls[current_char], current_char_reg_len)

        if(len(line) > pattern_max_len):
            pattern_max_len = len(line)
            if pattern_max_len == 364:
                print(line)

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
    
    f.write('void dummy(bool &matched, int &pattern_id, char buffer[buffer_size]){\n')
    f.write('matched = 1;\n')
    f.write('dummy_loop:for(int i=0; i< buffer_size - chunk_len; i++){\n')
    f.write('pattern_id += buffer[i];\n')
    f.write('}\n')
    f.write('}\n')
    f.write('}\n')

    indx = 0 
    characters_vars_map = {}
    for current_char, register_len in chars_rls.items():
        reg_name = 'reg_' + str(indx)
        characters_vars_map[current_char] = reg_name
        f.write('ap_uint<' + str(register_len) + '>' + reg_name + ' = 0;\n')
        indx += 1

    f.write('void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {\n')
    for current_char, register_len in chars_rls.items():
        current_char_fixed = current_char
        if current_char in specials.keys():
            current_char_fixed = specials[current_char]
        f.write(characters_vars_map[current_char] + ' >> 1;\n')
        f.write(characters_vars_map[current_char] + '(' + str(register_len - 1) + ") = ('" + current_char_fixed + "' == buffer[buffer_size - chunk_len]);\n")
    for i in range(num_of_patterns):
        f.write('if(')
        for j in range(len(pattern_list[i])): 
            current_char = pattern_list[i][j]
            f.write(characters_vars_map[current_char] + '(0)')
            if j < len(pattern_list[i]) - 1:
                f.write(' && ')
        f.write(') {\nmatched = true;\npattern_id = ' + str(i) + ';\n}\n')
    f.write('\n}')
import numpy as np

pattern_list = []
count = 0
long_patterns_count = 0
pattern_max_len = 0
uniques = []
safe_prefixs_poatfixs = [1] * 256
a_safe_prefix_postfix = ''
parallelism = 1
patterns_file = ''

with open('config.txt', 'r') as f:
    for line in f:
        line = line.replace('\n', '').replace(' ', '')
        splits = line.split('=')
        if splits[0] == 'patterns_file':
            patterns_file = splits[1]
        if splits[0] == 'parallelism':
            parallelism = splits[1]

for i in range(364):
    uniques.append({})

with open(patterns_file, 'r') as f:
    for line in f:
        line = line.replace('\n', '')
        pattern_list.append(line)
        if(len(line) > pattern_max_len):
            pattern_max_len = len(line)

unique_counts = [0] * pattern_max_len

for i in range(len(pattern_list)):
    current_pattern = pattern_list[i]
    current_pattern_length = len(current_pattern)
    for j in range(current_pattern_length):
        current_offset = pattern_max_len - current_pattern_length + j
        current_char = current_pattern[j]
        if current_char not in uniques[current_offset]:
            unique_counts[current_offset] += 1
            uniques[current_offset][current_char] = 'b' + str(current_offset) + '_' + str(unique_counts[current_offset])
    
    safe_prefixs_poatfixs[ ord(line[0]) ] = 0
    safe_prefixs_poatfixs[ ord(line[len(line) - 1]) ] = 0


for i in range(256):
    if safe_prefixs_poatfixs[i] == 1:
        a_safe_prefix_postfix = i

num_of_patterns = len(pattern_list)
pattern_list.sort()
#print(pattern_list[2634])
print(sum(unique_counts))

specials = {}
specials["'"] = "\\'"
specials['"'] = '\\"'

with open('./pattern_matcher.h', 'w') as f:
    f.write('#include "ap_int.h"\n\n\n')

    f.write('#ifndef DWIDTH\n')
    f.write('#define DWIDTH 512\n')
    f.write('#endif\n')
    f.write('typedef ap_uint<1> boolean;\n\n')

    f.write("const char a_safe_prefix_postfix = (char)" + str(a_safe_prefix_postfix) + ";\n")
    f.write('const int pattern_max_len = ' + str(pattern_max_len) + ';\n')
    f.write('const int parallelism = ' + str(parallelism) + ';\n')
    f.write('const int buffer_size = parallelism + pattern_max_len;\n')

    f.write('\nvoid match(ap_uint<16> &pattern_id, char buffer[buffer_size]);\n')
    f.write('void shift_and_fill(ap_uint<DWIDTH> chunk, char buffer[buffer_size], int start_indx);\n')

with open('./patterns_matcher.cpp', 'w') as f:
    f.write('#include "pattern_matcher.h"\n\n\n')
    f.write('void shift_and_fill(ap_uint<DWIDTH> chunk, char buffer[buffer_size], int start_indx){\n')
    f.write('shift_loop:for(int i=0; i< buffer_size - parallelism; i++){\n')
    f.write('#pragma HLS UNROLL\n')
    f.write('buffer[i] = buffer[i+parallelism];\n')
    f.write('}\n')
    f.write('fill_loop:for(int i=0;i<parallelism; i++){\n')
    f.write('#pragma HLS UNROLL\n')
    f.write('buffer[buffer_size - parallelism + i] = chunk((start_indx + i) * 8 + 7, (start_indx + i) * 8);\n')
    f.write('}\n')
    f.write('}\n\n')

    f.write('void match(ap_uint<16> &pattern_id, char buffer[buffer_size]) {\n')
    f.write('for(int i=0; i<parallelism; i++){\n')
    f.write('#pragma HLS UNROLL\n')
    for i in range(len(uniques)):
        unique_map = uniques[i]
        for character, bool_variable_name in unique_map.items():
            if character in specials.keys():
                character = specials[character]
            if i > 0:
                f.write('boolean ' + bool_variable_name + ' = (buffer[i + ' + str(i) + "] == '" + character + "');\n")
            else:
                f.write('boolean ' + bool_variable_name + " = (buffer[i] == '" + character + "');\n")
        
    for i in range(num_of_patterns):
        current_pattern = pattern_list[i]
        current_pattern_length = len(current_pattern)
        f.write('if(')
        for j in range(current_pattern_length):
            current_offset = pattern_max_len - current_pattern_length + j
            current_char = current_pattern[j]
            f.write(uniques[current_offset][current_char])
            if j < len(pattern_list[i]) - 1:
                f.write(' && ')
        f.write(') {\n')
        f.write('pattern_id = ' + str(i) + ';\n')
        f.write('}\n')
    
    f.write('}\n')
    f.write('\n}')
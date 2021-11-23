import numpy as np
import random
import string

random.seed(5)
np.random.seed(5)

packet_size = 1024
num_of_patterns = 256
pattern_max_len = 20
pattern_list = []

with open('./parretns.txt', 'w') as f:
    for i in range(num_of_patterns):
        pattern_len = random.randint(1, pattern_max_len)
        pattern = ''
        for j in range(pattern_len):
            pattern += random.choice(string.ascii_letters)
        f.write(pattern + '\n')
        pattern_list.append(pattern)

with open('./packet.txt', 'w') as f:
    packet = ''
    for j in range(packet_size):
        packet += random.choice(string.ascii_letters)
    f.write(packet)

with open('./patterns_matcher.cpp', 'w') as f:
    f.write('#include "pattern_matcher.h"\n\n\n')
    f.write('void pattern_matcher(ap_int<1> positions[' + str(num_of_patterns) + '][chunck_len + pattern_max_len], char chunk[chunck_len + pattern_max_len - 1]) {\n')
    for i in range(num_of_patterns):
        current_pattern_len = str( len(pattern_list[i]) )
        f.write('int starting_indx_' + str(i) + ' = pattern_max_len - ' + current_pattern_len + ';\n')
        f.write('for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){\n')
        f.write('if(')
        for j in range(len(pattern_list[i])):    
            f.write("'" + pattern_list[i][j] + "' == chunk[i" + ( ('+' + str(j)) if j > 0 else '' ) + ']')
            if j < len(pattern_list[i]) - 1:
                f.write(' && ')
        f.write(') {\n positions[' + str(i) + '][i] = 1; \n}\n}\n')
    f.write('\n}')

count = 0
long_patterns_count = 0
with open('pattern_match_snort3_content.txt', 'r') as f:
    for line in f:
        line = line.replace('\n', '')
        count += len(line)
        if(len(line) > 64):
            long_patterns_count += 1

print(count)
print(long_patterns_count)
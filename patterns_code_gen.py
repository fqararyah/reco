import numpy as np
import random
import string

""" random.seed(5)
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
    f.write(packet) """

pattern_list = []
count = 0
long_patterns_count = 0
pattern_max_len = 0
chunk_size = 1
uniques = []
for i in range(364):
    uniques.append({})
with open('pattern_match_snort3_content.txt', 'r') as f:
    for line in f:
        line = line.replace('\n', '')
        pattern_list.append(line)
        count += len(line)
        for i in range(len(line)):
            if line[i] not in uniques[i]:
                uniques[i][line[i]] = 1
            uniques[i][line[i]] += 1
        if(len(line) > pattern_max_len):
            pattern_max_len = len(line)
            if len(line) == 364:
                print(line)
        if(len(line) > 64):
            long_patterns_count += 1

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
    for i in range(num_of_patterns):
        current_pattern_len = str( len(pattern_list[i]) )
        f.write('for(int i=0; i<buffer_size; i++){\n')
        if chunk_size > 1:
            f.write('#pragma unroll factor = ' + str(chunk_size) + '\n')
        f.write('if(')
        for j in range(len(pattern_list[i])): 
            current_char = pattern_list[i][j]
            if current_char in specials.keys():
                current_char = specials[current_char]
                print(current_char)
            f.write("'" + current_char + "' == buffer[i" + ( ('+' + str(j)) if j > 0 else '' ) + ']')
            if j < len(pattern_list[i]) - 1:
                f.write(' && ')
        f.write(') {\n matched = true;\npattern_id = ' + str(i) + ' ;\n}\n}\n')
    f.write('\n}')


print('num_of_patterns', num_of_patterns)
print('num_characters', count)
print('long_patterns_count', long_patterns_count)
print('pattern_max_len', pattern_max_len)

sum_unique = 0
for unique in uniques:
    #print(len(unique))
    sum_unique += len(unique)

print('sum_unique', sum_unique)
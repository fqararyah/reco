





pattern_list = []
def keep_long():
    with open('pattern_match_snort3_content.txt', 'r') as f:
        for line in f:
            line = line.replace('\n', '')
            if len(line) > 32:
                pattern_list.append(line)
    
    with open('pattern_match_snort3_content_gt32.txt', 'w') as f:
        for pattern in pattern_list:
            f.write(pattern + '\n')

def keep_short():
    with open('pattern_match_snort3_content.txt', 'r') as f:
        for line in f:
            line = line.replace('\n', '')
            if len(line) < 4:
                pattern_list.append(line)
    
    with open('pattern_match_snort3_content_lt4.txt', 'w') as f:
        for pattern in pattern_list:
            f.write(pattern + '\n')

#keep_long()
keep_short()
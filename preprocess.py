





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
        sum_lens = 0
        for line in f:
            line = line.replace('\n', '')
            if len(line) < 16:
                pattern_list.append(line)
                sum_lens += len(line)
    print(sum_lens/ len(pattern_list))
    print(len(pattern_list))
    with open('pattern_match_snort3_content_lt16.txt', 'w') as f:
        for pattern in pattern_list:
            f.write(pattern + '\n')

def sequences_2s():
    unique_seqs = {}
    with open('pattern_match_snort3_content.txt', 'r') as f:
        for line in f:
            line = line.replace('\n', '')
            for i in range(0, len(line) - 32, 32):
                subseq = line[i:min(i+32, len(line))]
                subseq += '_' + str(i)
                if subseq not in unique_seqs:
                    unique_seqs[subseq] = 0
                unique_seqs[subseq] += 1
    
    sum = 0
    cnt = 0
    for key, val in unique_seqs.items():
        if val > 1:
            print(key, val)
            sum += val
            cnt += 1
    print(sum)
    print(cnt)
sequences_2s()
#keep_long()
keep_short()
file = open('24.txt')
seq_lens = []
s = list(file.readline())
tmp_len = 1
for i in range(1, len(s)):
    if s[i] == s[i-1]:
        seq_lens.append(tmp_len)
        tmp_len = 1
    else:
        tmp_len += 1
seq_lens.append(tmp_len)
print(max(seq_lens))
        

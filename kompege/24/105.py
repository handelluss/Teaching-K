s = open('24.txt').readline()
result = 0
loc_cnt = 1
for i in range(1, len(s)):
    if s[i-1] == s[i]:
        loc_cnt += 1
    else:
        result = max(result, loc_cnt)
        loc_cnt = 1
print(result)

file = open('27-B (1).txt')
N = int(file.readline())
a = []
for line in file:
    tmp = sorted(list(map(int, line.split())))
    tmp.append((tmp[1] - tmp[0]) % 3)
    a.append(tmp)
    
a.sort(key=lambda b: b[1] - b[0], reverse=True)

result = 0
for item in a:
    result += item[1]
print(*a[-200:-1], sep='\n')
print(result)
# Дальше подбираем в интерпретаторе




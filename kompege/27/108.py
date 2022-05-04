file = open('27-B.txt')
N = int(file.readline())
pairs = []
for _ in range(N):
    tmp = sorted(list(map(int, file.readline().split())))
    tmp.append((tmp[1]-tmp[0]) % 5)
    pairs.append(tmp)

pairs.sort(key=lambda d: d[1] - d[0], reverse=True)

result = 0
for i in range(N):
    result += pairs[i][1]

print([pair for pair in pairs if pair[2] != 0][-1]) # Берём список, где
# остаток от разницы при делении на пять (элемент со вторым индексом) != 0
print(result)

# Дальше подбором в интерпретаторе

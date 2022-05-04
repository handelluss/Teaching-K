file = open('27-B.txt')
remainders = [[0, 0] for _ in range(13)]
n = int(file.readline())
for _ in range(n):
    number = int(file.readline())
    remainders[number % 13][number % 2] += 1
result = 0
for i in range(13):
    result += remainders[i][0] * remainders[i][1]
    result += remainders[i][0] * (remainders[i][0] - 1) // 2
print(remainders)
print(result)
        

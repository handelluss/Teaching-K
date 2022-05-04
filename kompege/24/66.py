file = open('24.txt', encoding='windows-1251')
s = file.readline().replace('КОТ', 'x')
s = s.replace('Т', ' ').replace('К', ' ').replace('О', ' ')
print(len(max(s.split())))

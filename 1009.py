data = input().split()[::-1]
for i in range(len(data)-1):
  print(data[i],end=' ')
print(data[len(data)-1])
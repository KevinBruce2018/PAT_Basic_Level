data = input().lower()
sum_data = sum([ord(i)-ord('a')+1 for i in data if i.isalpha()])
data = bin(sum_data)[2:]
if sum_data==0:
  print(0,0)
else:
  print(data.count('0'),data.count('1'))

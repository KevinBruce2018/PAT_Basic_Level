n = eval(input())
for i in range(n):
  ans = input().split()
  for j in range(len(ans)):
    a,b = ans[j].split('-')
    if b =='T':
      print(ord(a)-64,end="")
      break

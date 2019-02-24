a,b = [int(i) for i in input().split()]
ans = str(a*b)[::-1]
i = 0
while ans[i]=='0':
  i+=1
print(ans[i:])
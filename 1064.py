n = eval(input())
num = input().split()
s = set()
for i in num:
    count = 0
    for j in i:
        count += ord(j)-ord("0")
    s.add(count)
rlt = str(len(s))+"\n"
for i in sorted(s):
    rlt += str(i)+" "
print(rlt.rstrip())
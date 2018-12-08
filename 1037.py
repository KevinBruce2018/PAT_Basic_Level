a,b = input().split()
a = [int(i) for i in a.split('.')]
b = [int(i) for i in b.split('.')]
out = b[0]*17*29+b[1]*29+b[2] - (a[0]*17*29+a[1]*29+a[2])

if out<0:
    out = -out
    print('-',end="")
s = out//(17*29)
g = (out-s*17*29)//29
k = (out-s*17*29-g*29)
print(str(s)+'.'+str(g)+'.'+str(k))

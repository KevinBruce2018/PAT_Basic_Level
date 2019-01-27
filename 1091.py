m = eval(input())
num = input().split()
for i in range(m):
    flag = False
    square = int(num[i])**2
    for j in range(1,10):
        s = str(j*square)
        if num[i] == s[len(s)-len(num[i]):]:
            flag = True
            print(j,square*j)
            break
    if flag == False:
        print("No")

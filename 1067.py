pwd,n = input().split()
flag = False
for i in range(int(n)):
    passwd = input()
    if passwd == pwd:
        print("Welcome in")
        flag = True
        break
    elif passwd == '#':
        flag = True
        break
    else:
        print("Wrong password: "+passwd)
if not flag:
    print("Account locked")

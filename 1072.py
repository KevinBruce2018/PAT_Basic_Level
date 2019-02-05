pro_stu = 0
all_gar = 0
n = int(input().split()[0])
gar = input().split()

for i in range(n):
    message = input().split()
    name = message[0]
    rlt = name+":"
    for j in range(2,len(message)):
        if message[j] in gar:
            all_gar += 1
            rlt += " "+message[j]
    if rlt != name+":":
        print(rlt)
        pro_stu += 1
print(pro_stu,all_gar)

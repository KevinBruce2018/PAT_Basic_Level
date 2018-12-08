data = input()
message = "PATest"
length = []
for i in range(len(message)):
    length.append (len(data) - len(data.replace(message[i],"")))
flag = True
min_len = min(length)
for i in range(6):
    length[i] -= min_len
print(min_len*message,end = "")
while flag:
    flag = False
    for i in range(6):
        if length[i]>0:
            length[i]-=1
            print(message[i],end="")
            flag = True

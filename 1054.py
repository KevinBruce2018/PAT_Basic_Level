# -*- coding: utf-8 -*-
n = eval(input())
data = input().split()
result = []
for i in data:
    try:
        value = eval(i)
        #flag = i.find('.')==-1 or (i.find('.')!=-1 and len(i)-i.find('.')-1<=2 and i.find('.')!=0)
        if value>=-1000 and value <=1000 and len(i)-i.find('.')-1<=2 and i.find('.')!=0:
            result.append(value)
        else:
            print('ERROR: '+i+' is not a legal number')  
    except:
        try:
            if 1000>=int(i)>=-1000:
                result.append(int(i))
        except:
            print('ERROR: '+i+' is not a legal number')
if len(result)==0:
    print('The average of 0 numbers is Undefined')
elif len(result)==1:
    print('The average of 1 number is {:.2f}'.format(result[0]))
else:
    print('The average of {} numbers is {:.2f}'.format(len(result),sum(result)/len(result)))

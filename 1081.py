n = eval(input())

for i in range(n):
    password = input()
    if len(password)<6:
        print("Your password is tai duan le.")
    elif password.replace('.','').isdigit():
        print('Your password needs zi mu.')
    elif password.replace('.','').isalpha():
        print('Your password needs shu zi.')
    elif password.replace('.','').isalnum()==False:
        print('Your password is tai luan le.')
    else:
        print('Your password is wan mei.')
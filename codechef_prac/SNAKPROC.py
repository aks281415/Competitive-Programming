for _ in range(int(input())):
    n = int(input())
    s = input()
    t = 0
    for i in s:
        if (t==0 and i == 'T') or (t==1 and i == 'H'):
            print("Invalid")
            break
        if i == 'H':
            t = 1
        elif i == 'T':
            t = 0
    else:
        if t==0:
            print("Valid")
        else:
            print("Invalid")
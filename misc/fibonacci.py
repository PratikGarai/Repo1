n = int(input())
if(n<=0):
    print('Not possible')
else:
    a,b = 0,1
    for i in range(n):
        print(a,end ="  ")
        a,b = b,a+b
    print()

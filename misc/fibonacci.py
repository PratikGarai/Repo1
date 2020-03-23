print("Enter the no. of terms to be printed")
n = int(input())
if(n<=0):
    print('Not possible')
else:
    print("The series ")
    a,b = 0,1
    for i in range(n):
        print(a,end ="  ")
        a,b = b,a-b
    print()

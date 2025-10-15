def fib(n):
    f=0
    s=1
    print(f,s,end=' ')
    for i in range (n-2):
        a=f+s
        f=s
        s=a
        print(a,end=' ')
n=int(input("enter a number: "))   
fib(n)
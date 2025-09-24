a=int(input("enter first number: "))
b=int(input("enter second number: "))
c=int(input("enter third number: "))
if a>b:
    if a>c:
        print(a," is largest")
    else:
        print(c," is largest")
else:
    if b>c:
        print(b," is largest")
    else:
        print(c, " is largest")
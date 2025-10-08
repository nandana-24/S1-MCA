import math
def quadratic(a,b,c):
    if a==0:
        print("quadratic eqn cant be obtained")
        return
    discriminant=b**2-4*a*c
    if discriminant>0:
        root1=(-b+math.sqrt(discriminant))/2*a
        root2=(-b-math.sqrt(discriminant))/2*a
        print("Roots of quadratic equation are:",root1," ",root2)
    elif discriminant==0:
        root=-b/(2*a)
        print("Root of quadratic equation:",root)
    else:
        real=(-b)/2*a
        imag=(math.sqrt(abs(discriminant)))/2*a
        root1=complex(real,imag)
        root2=complex(real,-imag)
        print("Roots of quadratic equation are:",root1," ",root2)
a=int(input("enter coefficient 'a': "))
b=int(input("enter coefficient 'b': "))
c=int(input("enter coefficient 'c': "))
quadratic(a,b,c)
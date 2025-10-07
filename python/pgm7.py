res=1
n=int(input("enter a number"))
if n==0:
    print("1")
for i in range(1,n+1):
    res=res*i
print(res)
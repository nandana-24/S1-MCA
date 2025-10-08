a=input("enter a word: ")
l=len(a)
first=a[0]
last=a[l-1]
print(last,end='')
for i in range(1,l-1):
    print(a[i],end='')
print(first,end='')
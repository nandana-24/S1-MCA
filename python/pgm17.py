num=[]
print("enter 5 elements to add in list")
for i in range(5):
    n=int(input())
    num.append(n)
even_list=[i for i in num if i%2!=0]
print(even_list)
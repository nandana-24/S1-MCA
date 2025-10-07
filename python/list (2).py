list1=[1,2,3,4,5]
list2=[3,4,5,7,8]
if len(list1)==len(list2):
    print("Both lists are of same length")
else:
    print("Lists are of different length")

sum1=0
sum2=0
for i in list1:
    sum1=sum1+int(i)
for i in list2:
    sum2=sum2+int(i)
if sum1==sum2:
    print("List sums to same value")
else:
    print("Sum of list values are different.\nSum of list1: ",sum1,"\nSum of list2: ",sum2)

for i in list1:
    for j in list2:
        if i==j:
            print(i)


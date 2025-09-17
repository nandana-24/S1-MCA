limit=int(input("enter num of numbers"))
for i in range(limit):
    num=int(input())
    if num>100:
        num='over'
    print(num)


names_list='Abhayjith,Aarjav,Jumna,Ansaf,Sir'
names=names_list.split(',')
count=0
for i in names:
    for j in range(len(i)):
        if i[j]=='a' or i[j]=='A':
            count+=1
print(count)
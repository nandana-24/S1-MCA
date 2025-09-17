num=[-1,3,4,-10,8,-8,78,23,14,-34,-8]
x=[x for x in num if x>0]
print(x)

limit=int(input("enter limit"))
num=[]
for i in range(limit):
    #x=int(input("enter num:  "))
    num.append(int(input("enter num:  ")))
sq=[x*x for x in num]
print(sq)

word="Jumna"
vowel=[i for i in word if i in ['a','e','i','o','u']]
print(vowel)

name="Parthivu"
val=[ord(j) for j in name]
print(val)
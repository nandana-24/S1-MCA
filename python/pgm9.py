i=int(input("enter year: "))
if (i%4==0 and i%100!=0) or (i%400==0):
        print(i," is a leap year")
else:
        print(i," is not a leap year")

colours=['red','blue','green','yellow','pink']
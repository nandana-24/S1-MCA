import datetime
start_yr=int(input("enter current year: "))
end_yr=int(input("enter year: "))
for i in range(start_yr,end_yr+1):
    if (i%4==0 and i%100!=0) or (i%400==0):
        print(i)

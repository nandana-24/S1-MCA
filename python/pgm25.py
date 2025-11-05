class Time:
    def __init__(self,h,m,s):
        self.__hrs=h
        self.__ms=m
        self.__sec=s
    def __add__(self,other):
        total_hrs=self.__hrs+other.__hrs
        total_ms=self.__ms+other.__ms
        total_sec=self.__sec+other.__sec

        if total_sec>=60:
            total_ms+=total_sec//60
            total_sec=total_sec%60
        if total_ms>=60:
            total_hrs+=total_ms//60
            total_ms=total_ms%60
        total_hrs%=24
        return Time(total_hrs,total_ms,total_sec)
    def show(self):
        print(self.__hrs,":",self.__ms,":",self.__sec)
    def __str__(self):
        return f"{self.__hrs}:{self.__ms}:{self.__sec}"
t1=Time(21,45,78)
t2=Time(43,56,12)
t3=t1+t2
t1.show()
t2.show()
print(t3)
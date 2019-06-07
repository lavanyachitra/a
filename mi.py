import math
a=int(input())
b=math.log10(a)/math.log10(2)
if math.ceil(b)==math.floor(b):
    print(0)
else:
    c=(a-1)//2
    d=c*2
    print(a-d)
    

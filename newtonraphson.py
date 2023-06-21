import math
def eq(x):
    return (math.exp(-x)-3*x)
def deq(x):
    return (-(math.exp(-x))-3)

def x2(x0):
     
     z= x0-(eq(x0)/deq(x0))
     print(x0,"     ",eq(x0),'       ',deq(x0),'      ',z,"     ",((z-x0)/z))
     if math.sqrt(((z-x0)/z)*((z-x0)/z))<0.01:
         return 1
     return x2(z)


a=x2(1)

import math
def eq(x):
    return (math.cos(x)+2*math.sin(x)+x*x)

def x2(x0,x1):
     print(x0," ",eq(x0),end=' ')
     print(x1," ",eq(x1),end=' ')
     z= x1-((eq(x1)*(x1-x0))/(eq(x1)-eq(x0)))
     print(z,end='      ')
     print((z-x1)/z)

     return x2(x1,z)


a=x2(1,2)

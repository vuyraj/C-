//c Fixed point
#include<stdio.h>
#include<conio.h>
#include<math.h>
//#define F(x) (a3*x*x*x+a2*x*x+a1*x+a0)
#define G(x) ((a3*x*x*x+a2*x*x+a0)/(-1*a1))
float a0, a1, a2, a3;
int main(){
float x0,x1, fx, gx, E, Era;
printf("Enter the Coefficients a3, a2,a1 and a0: \n");
scanf("%f %f %f %f",&a3, &a2, &a1,&a0);
printf("Enter initial guess and E: \n");
scanf("%f %f",&x0,&E);

LOOP:
x1= G(x0);
Era = ((x1-x0)/x1);
if (abs(Era)>=abs(E)){
    x0=x1;
    goto LOOP;
}
else
{
    printf("root is = %f",x1);
}

getch();

}

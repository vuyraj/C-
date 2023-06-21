//c secant method
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x) (a3*x*x*x+a2*x*x+a1*x+a0)
float a0, a1, a2, a3;
int main(){
float x0,x1,x2, fx0, fx1, E, Era;
printf("Enter the Coefficients a3, a2,a1 and a0: \n"); 
scanf("%f %f %f %f",&a3, &a2, &a1,&a0);
printf("Enter initial guess and E: \n");
scanf("%f %f %f",&x0,&x1,&E);

fx0=F(x0);
fx1=F(x1);
LOOP:

x2= x1-((fx1*(x1-x0))/(fx1-fx0));
Era = abs((x2-x1)/x2);
if (Era>=E){
    x0=x1;
    x1=x2;
    fx0=fx1;
    fx1=F(x2);
    goto LOOP;
}
else
    printf("root is = %f",x2);

getch();

}
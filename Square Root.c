#include<stdio.h>
int main()
{
int a,b,c,D;
printf("Enter coefficients of the quadratic equation to check whether roots are real or imaginary\n");

printf("Coefficient of x^2 = \n");
scanf("%d",&a);
printf("Coefficient of x =  \n");
scanf("%d",&b);
printf("Constant = \n");
scanf("%d",&c);
D=(b*b)-(4*a*c);
if(D>=0)
{
if(D=0)
printf("Roots are Real and Equal");
else
printf("Roots are Real and Unequal");
}
if(D<0)
printf("Roots are Imaginary");
return 0;
}

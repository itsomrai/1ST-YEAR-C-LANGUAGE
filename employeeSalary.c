#include <stdio.h>
int main()
{
float basic;
float hra;
float da;
printf("Enter The basic salary hra And da");
scanf("%f %f %f", &basic,&hra,&da);
float salary=basic+hra+da;
printf("The salary of employee %.2gitf",salary);
return 0;
}
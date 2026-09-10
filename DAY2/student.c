#include <stdio.h>
int main()
{
int age;int roll;float marks;
printf("Enter the marks,roll no,age");
scanf("%f %d %d" ,&marks,&roll,&age);
printf("MARKS:=%.2f,AGE= %d,roll= %d ",marks,roll,age);
return 0;
}
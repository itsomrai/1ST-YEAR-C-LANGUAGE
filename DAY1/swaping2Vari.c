//WAP to perform swapping of 2 variable
#include<stdio.h>
int main()
{
int a,b;
printf("ENTER A AND B");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d & b=%d",a,b);
return 0;
}
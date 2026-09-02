#include <stdio.h>
int main()
{
int a,b;
printf("Enter the value a and b");
scanf("%d %d ", &a , &b);
int c=a+b;
int d=b-a;
int e=b*a;
int f=b/a;
printf("The addition of a and b %d",c);
printf("\nThe substraction of a and b %d",d);
printf("\nThe multiplication of a and b %d",e);
printf("\nThe division of a and b %d",f);
return 0;
}
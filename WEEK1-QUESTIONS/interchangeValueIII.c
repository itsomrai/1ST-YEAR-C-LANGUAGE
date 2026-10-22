#include <stdio.h>
int main()
{
int a;int b;
scanf("%d",&a);
scanf("%d",&b);
a=a^b;
b=a^b;//b holds  original a
a=a^b;//a hold  original b
printf("a=%d, b=%d",a,b); 
return 0;
}
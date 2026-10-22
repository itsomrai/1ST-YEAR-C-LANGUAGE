#include <stdio.h>
int main()
{
int temp;int a;int b;
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("a=%d, b=%d",a,b);
return 0;
}
#include <stdio.h>
int main()
{
int a,b,pro;
printf("Enter the number of which you write table");
scanf("%d",&a);
printf("Enter till which you have multiply");
scanf("%d",&b);
for(int i=1;i<=b;i++){
    pro=a*i;
    printf("%d X %d = %d\n",a,i,pro);
}
return 0;
}
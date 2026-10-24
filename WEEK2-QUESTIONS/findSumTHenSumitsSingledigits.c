#include <stdio.h>
int main()
{
int n,sum;
scanf("%d",&n);
if(n<0)
    n=-n;
while(n>9){
    sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    n=sum;
}
printf("Single digit sum=%d\n",n);
return 0;
}
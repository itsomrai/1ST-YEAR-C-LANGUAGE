#include <stdio.h>
int main()
{
int n;int digit;int sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
    digit=n%10;
    sum=sum+digit;
    n/=10;
}
printf("%d",sum);
return 0;
}
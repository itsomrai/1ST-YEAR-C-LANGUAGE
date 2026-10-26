#include <stdio.h>
int main()
{
int n;int digit=0;int sum=0;
scanf("%d",&n);
int temp=n;
while(temp!=0){
    digit=temp%10;
    sum=sum+digit*digit*digit;
    temp/=10;
}
if(sum==n){
    printf("Armstrong no.");
}
else{
    printf("Not Armstrong");
}
return 0;
}
#include <stdio.h>
int main()
{
int n,d,count=0;int temp;
printf("Enter a number");
scanf("%d",&n);
printf("Enter the number which you have to find the frequency(0-9)");
scanf("%d",&d);
if(n<0)
n=-n;

temp=n;
if(n==0 && d==0)
count=1;
while(temp>0){
    if(temp%10==d){
        count++;
    }
            temp/=10;

}
printf("Digit %d occurs %d time(s)\n",d,count);
return 0;
}
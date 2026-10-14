#include <stdio.h>
int main()
{
int n;int temp;int rev=0;
printf("Enter the number");
scanf("%d",&n);
int og=n;
while(n!=0){
    temp=n%10;
    rev=rev*10+temp;
    n/=10;
}
if(og==rev){
    printf("palindrome");
}
else{
    printf("not palindrome");
}
return 0;
}
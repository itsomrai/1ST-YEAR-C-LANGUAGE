#include <stdio.h>
int main()
{
int n;int temp;int rev;
printf("Enter the number");
scanf("%d",&n);
int originalNum=n;
while(n!=0){
    temp=n%10;
    rev=rev*10+temp;
    n/=10;
}
if(originalNum==rev){
    printf("Palindrome no.");
}
else{
    printf("not palindrome");
}
return 0;
}
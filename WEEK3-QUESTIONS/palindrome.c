#include <stdio.h>
int main()
{
int rev=0;int n;int temp;
scanf("%d",&n);
int a=n;
for(int i=0;i<=n;i++){
    temp=n%10;
    rev=rev*10+temp;
    n/=10;
}
if(a==rev){
    printf("PALINDROME");
}
else{
    printf("NOT PALINDROME");
}
return 0;
}
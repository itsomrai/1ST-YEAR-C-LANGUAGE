#include <stdio.h>
int main()
{
int n; int a=0;int b=1;int d;
printf("ENTER TILL WHERE YOU WANT BREAK THE SERIES");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("%d",a);
    d=a+b;
    a=b;
    b=d;
}
printf("\n");
return 0;
}
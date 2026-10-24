#include <stdio.h>
int main()
{
int pro;int n;
printf("Enter the number which you have to make table");
scanf("%d",&n);
    for(int i=1;i<=10;i++){
        pro=n*i;
        printf("%d X %d = %d\n",n,i,pro);
    }
return 0;
}
#include <stdio.h>
int main()
{
int n[10];int sum=0;
for(int i=0;i<5;i++){
    scanf("%d",&n[i]);

sum+=n[i];
}
printf("Sum = %d",sum);
return 0;
}
#include <stdio.h>
int main()
{
    int n;long ways=1;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    ways=ways*i;
}
printf("%d",ways);
return 0;
}
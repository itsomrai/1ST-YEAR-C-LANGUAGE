#include <stdio.h>
int main()
{
int n;int fact=0;
scanf("%d",&n);
if(n<2){
    fact=1;
}
for(int i=2;i<n;i++){
    fact=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            fact=1;
            break;
        }
    }
    if(fact==0){
        printf("%d\n",i);
    }
}
printf("\n");

return 0;
}
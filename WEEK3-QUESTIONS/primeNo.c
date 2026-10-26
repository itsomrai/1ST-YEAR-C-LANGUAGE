#include <stdio.h>
int main()
{
int n;int fact=0;
scanf("%d",&n);
if(n<2){
    fact=1;
}
for(int i =2;i<n;i++){
    if(n%i==0){
        fact=1;
        break;
    }
}
if(fact==0){
    printf("Prime number");
}
else{
    printf("Not prime");
}

return 0;
}
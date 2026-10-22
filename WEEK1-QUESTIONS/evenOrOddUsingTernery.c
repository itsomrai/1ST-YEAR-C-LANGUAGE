#include <stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a&1){
    printf("ODD");
}
else{
    printf("EVEN");
}
return 0;
}
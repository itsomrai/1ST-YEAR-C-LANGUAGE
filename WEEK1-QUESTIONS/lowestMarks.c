#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a<b && a<c){
    printf("A has least marks");
}
else if(b<a && b<c){
    printf("B has least marks");
}
else{
    printf("C has least marks");
}
return 0;
}
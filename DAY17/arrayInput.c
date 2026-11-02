#include <stdio.h>
int main()
{
int n[10];
for(int i=0;i<5;i++){
    scanf("%d",&n[i]);
}
for(int i=0;i<5;i++){
    printf("Num=%d\n",n[i]);
}
return 0;
}
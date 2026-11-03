#include <stdio.h>
int main()
{
int n[10];
for(int i=0;i<5;i++){
    scanf("%d",&n[i]);
}
int max=n[0];
for(int i=0;i<5;i++){
        if(n[i]>max){
    max=n[i];
}
}

printf("max value is =%d",max);
return 0;
}
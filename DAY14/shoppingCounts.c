#include <stdio.h>
int main()
{
int count[7];int max=0;
    printf("shipping count");
for(int i=0;i<7;i++){
    scanf("%d",&count[i]);
}
//WAY OF FINDING MAX NUMBER
for(int i=0;i<7;i++){
    for(int j=0;j<7;j++){
        if(count[j]>max){
            max=count[j];
        }
    }
}
printf("Maximum Shipping count: %d\n",max);
printf("Days with Shipping Counts > %d",max/2);
//FOR FINDING CONDITIONAL COUNTS WHICH ARE LESS THEN GIVEN VALUES
int first=1;
for(int i=0;i<7;i++){
    if(count[i]>max/2.0){
        if(!first)printf(",");
        printf("Day %d",i);
        first=0;
    }
}
printf("\n");
return 0;
}
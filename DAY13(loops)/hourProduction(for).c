#include <stdio.h>
int main()
{
int hours;
int items;
int totalItems=0;
for(hours=1;hours<=12;hours++){
        printf("Hour %d:\n",hours);
        scanf("%d",&items);
        totalItems+=items;
        if(items<50){
            printf("Low Production Hours: %d\n",hours);
        }
    }
            printf("Total items Produced:%d\n",totalItems);
            printf("low production is on Hour %d\n",hours-1);

return 0;
}
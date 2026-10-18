#include <stdio.h>
int main()
{
int hour=1;int items;int total=0;
do {
    printf("Hours %d:",hour);
    scanf("%d",&items);

    total+=items;
    if(items<50){
        printf("Low production hour: %d\n",hour);
    }
    hour++;
}
while (hour<=12);

printf("Total items Produced :%d\n",total);
return 0;
}
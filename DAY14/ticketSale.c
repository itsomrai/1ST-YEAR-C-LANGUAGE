#include <stdio.h>
int main()
{
int ticket;int totalTicket=0;int day;int count=0;int stopped_early=0;
printf("Sales:"); 
for(day=1;day<=3;day++){
    scanf("%d",&ticket);

    if(ticket==0){
        stopped_early=1;
        break;
    }
    totalTicket+=ticket;
if(ticket<50){
    count++;
}
}
printf("Total Tickets Sold: %d\n",totalTicket);
printf("Days with Sales Below 50:%d\n",count);
printf("PRocessesing Stopped Early Due to Zero Sales: %s\n",stopped_early?"Yes":"No");
return 0;
}
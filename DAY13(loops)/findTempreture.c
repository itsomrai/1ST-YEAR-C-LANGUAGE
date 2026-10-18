#include <stdio.h>
int main()
{
int days=7;
int n;
int temp,tempTotal;
float avgTemp[8];
int maxTemp;
printf("Enter No. of tempreture reading per Day \n:");
scanf("%d",&n);
for(int day=1;day<=days;day++){
    tempTotal=0;
    printf("Enter %d tempretures for day %d\n",n,day);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        tempTotal+=temp;
        avgTemp[day]=(float)tempTotal/n;
    }
    printf("Day %d Average Tempreture: %.2f \n",day,avgTemp[day]);
}
float highest=avgTemp[1];
for(int day =1;day<=days;day++){
    if(avgTemp[day]>highest){
        highest=avgTemp[day];
    }
}
printf("Highest Avg tempreture is ");
int first=1;
for(int day=1;day<=days;day++){
    if(avgTemp[day]==highest){
        if(!first)
            printf("and");
            printf("Day %d",day);
            first=0;
        
    }
}
    printf(" (%g degree)\n",highest);

return 0;
}
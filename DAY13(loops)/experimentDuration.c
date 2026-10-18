#include <stdio.h>
int main()
{
int days=7;
int n; //Experiment per day
int duration,dayTotal;
int weekTotal =0;

printf("Enter number of experiment per days: ");
scanf("%d",&n);
for(int day=1;day<=days;day++){
    dayTotal=0;
    printf("Enter %d duration for day %d:",n,day);
    for(int i=0;i<n;i++){
        scanf("%d",&duration);
        dayTotal+=duration;
    }
    printf("Day %d total= %d minutes\n",day,dayTotal);
    if(dayTotal>480){
        printf("Day %d exceeded 8 hours!..\n",day);
    }
    weekTotal+=dayTotal;
}
printf("\nTotal time for the week = %d minutes\n",weekTotal);
return 0;
}
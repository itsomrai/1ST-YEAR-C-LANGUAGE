#include <stdio.h>
int main()
{
int units;
double bill;
scanf("%d",&units);
if(units>0 && units<100){
    bill=units*2.5;
}
else if(units>100 && units<200){
    bill=units*3.0;
}
else if(units>201 && units<300){
    bill=units*3.5;
}
else if(units>300 && units <400){
    bill=units*4.0;
}
printf("%.2f",bill);


return 0;
}
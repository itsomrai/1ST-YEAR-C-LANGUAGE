#include <stdio.h>
int main()
{
int temp;
scanf("%d",&temp);
if(temp<0){
    printf("FREEZING POINT");
}
else if(temp>0 && temp<10){
    printf("VERY COLD WEATHER");
}
else if(temp>10 && temp<20){
    printf("COLD WEATHER");
}
else if(temp>10 && temp<30){
    printf("NORMAL IN TEMPRETURE");
}
else if(temp>30 && temp<40){
    printf("THEN ITS HOT");
}
else{
    printf("THEN ITS VERY HOT");
}
return 0;
}
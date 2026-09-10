#include <stdio.h>
int main()
{
float cost;
int unit;
printf("Enter cost and units");
scanf("%f %d",&cost,&unit);
float bill=cost*unit;
printf("%f",bill);
return 0;
}
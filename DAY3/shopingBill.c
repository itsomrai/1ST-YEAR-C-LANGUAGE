#include <stdio.h>
int main()
{
int quantity;float price;
printf("enter Quantity And Price");
scanf("%d %f" ,&quantity,&price);
float bill=quantity*price;
printf("The bill= %.2f",bill);

return 0;
}
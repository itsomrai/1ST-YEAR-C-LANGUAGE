#include <stdio.h>
int main()
{
float celcius,fahrenheit;
printf("Enter the tempreture in celcius");
scanf("%f",&celcius);
fahrenheit=(9/5*celcius)+32;
printf("The tempreture in fahrenheit is =%.2f",fahrenheit);
return 0;
}
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
switch (n)
{
case 1:
printf("One");
    break;
case 2:
printf("Two");
    break;
case 3:
printf("Three");
    break;
case 4:
printf("Four");
    break;
case 5:
printf("Five");
    break;
case 6:
printf("Six");
    break;
case 7:
printf("Seven");
    break;
case 8:
printf("eight");
    break;
case 9:
printf("nine");
    break;

default:
printf("Error! digit should be single");
    break;
}
return 0;
}
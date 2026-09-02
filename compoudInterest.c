#include <stdio.h>
#include<math.h>
int main()
{
int p=2000;
int Amt;
int rate=6;
int time=10;
int Ci;
Amt=p*(1+(rate/100)^time);
Ci=Amt-p;
printf("The compound intrest = %d",Ci);
return 0;
}
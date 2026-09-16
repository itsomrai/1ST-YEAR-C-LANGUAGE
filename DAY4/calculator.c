#include <stdio.h>
int main()
{
float a,b;
char c;
printf("Enter A\n");
printf("Enter B\n");
printf("Enter opretor(+,-,*,/)\n");
scanf("%f %f %c",&a,&b,&c);
if(c=='+'){
    printf("%.2f\n",a+b);
}
else if(c=='-'){
    printf("%.2f",a-b);
}
else if(c=='*'){
    printf("%.2f",a*b);
}
else if(c=='/'){
    printf("%.2f",a/b);
}
return 0;
}
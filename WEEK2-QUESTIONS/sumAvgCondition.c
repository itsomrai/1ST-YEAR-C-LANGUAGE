#include <stdio.h>
int main()
{
float num,sum=0;
int count=0;
printf("Enter numbers(negetive number to stop)");
while(1){
    scanf("%f",&num);
    if(num<0)
        break;
        sum+=num;
        count++;
}
if(count>0){
    printf("Sum =%.2f\n",sum);
    printf("Average =%.2f\n",sum/count);

}
else{
    printf("NO positive number");
}
return 0;
}
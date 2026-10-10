#include <stdio.h>
int main()
{
int salary,ratings,experiance;int finalSalary,Bonus;
printf("Enter salary\n");
scanf("%d",&salary);
printf("Enter ratings of the employee\n");
scanf("%d",&ratings);
printf("Enter experiance\n");
scanf("%d",&experiance);
if(ratings==5){
    finalSalary=salary+((20*salary)/100);
    Bonus=finalSalary-salary;
}
else if(ratings==4){
    finalSalary=salary+((15*salary)/100);
    Bonus=finalSalary-salary;
}
else if(ratings==3){
    finalSalary=salary+((10*salary)/100);
    Bonus=finalSalary-salary;
}
else{
    finalSalary=salary;
    Bonus=finalSalary-salary;
}
if(experiance>5){
    printf("The bonus of the employee is %d + 5000 rs Additional Bonus is %d\n",Bonus,Bonus+5000);

}
else{
    printf("The salary of the employee is %d\n",Bonus);
}
return 0;
}
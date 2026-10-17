#include <stdio.h>
int main()
{
int ticket,security,group;
printf("ENTER TICKET '1' IF TICKET IS VALID AND '0' IF INVALID");
scanf("%d",&ticket);
printf("ENTER '1' IF SECURITY CLEARED AND IF NOT THEN '0'");
scanf("%d",&security);
printf("Tell your group 1(Priority Boarding),2(Regular Boarding) or 3(Last Boarding)");
scanf("%d",&group);
if(ticket==1 && security==1 && group==1){
    printf("Priority Boarding");
}
else if(ticket==1 && security==1 && group==2){
    printf("Regular Boarding");
}
else if(ticket==1 && security==1 && group==3){
    printf("Last Boarding");
}
else if(ticket==1 && security==0 && group==1){
    printf("Security Clearance Required");
}
else if(ticket==0 && security==1 && group==1){
    printf("Invalid Ticket");
}
else if(ticket==0 && security==0 && group==2){
    printf("Invalid Ticket");
}
return 0;
}
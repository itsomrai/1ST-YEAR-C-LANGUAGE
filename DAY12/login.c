#include <stdio.h>
int main()
{
int username;int pass;int status;
printf("Enter username");
scanf("%d",&username);
printf("Enter password");
scanf("%d",&pass);
printf("STATUS");
scanf("%d",&status);
if(username==1001 && pass==5678 && status==1){
    printf("Login Sucessfull");
}
else if(pass!=5678){
    printf("Invalid Password"); 
}
else if(username!=1001){
    printf("Invalid Username");
}
else if(status==0){
    printf("Account Blocked");
}

return 0;
}
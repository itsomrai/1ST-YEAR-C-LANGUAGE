#include <stdio.h>
int main()
{
int amt,member;int pay;
printf("Enter the amount you purchased\n");
scanf("%d",&amt);
printf("Enter (1) if premium member OR (0) if regular member\n");
scanf(" %d",&member);
if(member==1 && amt>=2000){
    pay=amt-((20*amt)/100);
}
else if(member==0 && amt>=2000){
    pay=amt-((10*amt)/100);
}
else{
    pay=amt;
}
if(pay>5000){
    printf("You have to pay %d and got cashback of 500 rs\n",pay);
}
else{
    printf("You have to pay %d\n",pay);
}
return 0;
}
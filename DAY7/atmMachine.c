#include <stdio.h>
int main()
{
    int pin;
    int balance = 20000;
    printf("Set Pin\n");
    scanf("%d", &pin);
    printf("Your pin is Updated Succesfully\n");
    char c;
    int p, amount;
    printf("If You have withdraw Money Press 'Y' or if NO press 'N' \n");
    scanf(" %c",&c);
    if (c == 'Y' || c == 'y')
    {
        printf("Enter pin\n");
        scanf("%d", &p);

        printf("Enter amount you have to withdraw\n");
        scanf("%d", &amount);
        if (p != pin)
        {
            printf("Incorrect Pin\n");
            return;
        }
        else if (amount % 500 != 0)
        {
            printf("invalid amount\n");
        }
        else if (amount > balance)
        {
            printf("Insufficient Balance\n");
        }
        printf("Your amount %d",amount);
        printf("Has been Withdraw from your Account\n");
        printf("Remaining balance = %d",20000-amount);
    }
        else{
        printf("Thank you For Visiting Our Bank...");
    }
    return 0;
}

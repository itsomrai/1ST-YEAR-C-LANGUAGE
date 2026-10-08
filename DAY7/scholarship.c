#include <stdio.h>

int main()
{
    int per, att, income;

    printf("Enter percentage of student\n");
    scanf("%d", &per);
    printf("Enter attendance of student\n");
    scanf("%d", &att);
    printf("Enter income of family\n");
    scanf("%d", &income);

    if (per >= 90 && att >= 75 && income <= 500000) {
        printf("Gold Scholarship\n");
    }
    else if (per >= 75 && att >= 75 && income <= 500000) {
        printf("Silver Scholarship\n");
    }
    else {
        printf("Not eligible\n");
    }

    return 0;
}
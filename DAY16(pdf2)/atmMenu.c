#include <stdio.h>

int main() {
    int choice;

    do {
        printf("1. Check balance  2. Exit\n");

        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance: 5000\n");
        }
        else if (choice == 2) {
            printf("Thank you\n");
        }

    } while (choice != 2);

    return 0;
}
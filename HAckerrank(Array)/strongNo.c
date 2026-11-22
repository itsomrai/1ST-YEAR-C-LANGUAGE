#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   int n;
        int sum = 0;
        scanf("%d",&n);
        int temp = n;

        while (temp > 0) {
            int digit = temp % 10;

            int fact = 1;
            for (int i = 1; i <= digit; i++) {
                fact = fact * i;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == n) {
            printf("YES");
        } else {
            printf("NO");
        }

    return 0;
}

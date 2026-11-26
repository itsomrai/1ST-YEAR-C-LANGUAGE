
#include <stdio.h>

int main() {
    int n, square, temp, divisor = 1;

    scanf("%d", &n);

    square = n * n;
    temp = n;

    while (temp > 0) {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    if (square % divisor == n) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

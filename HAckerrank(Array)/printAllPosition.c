#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, x;
    scanf("%d", &n);

    static int a[100000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            if (found) printf(" ");
            printf("%d", i + 1);
            found = 1;
        }
    }

    if (!found) printf("-1");
    return 0;
}

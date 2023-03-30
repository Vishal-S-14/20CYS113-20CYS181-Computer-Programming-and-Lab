#include <stdio.h>

int main() {
    int n, i = 1, factor = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        factor = factor * i;
        i = i + 1;
        printf("factor = %d\n", factor);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, c = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int a = 0; a <= n; a++) {
        c = a + c;
    }

    printf("%d\n", c);

    return 0;
}

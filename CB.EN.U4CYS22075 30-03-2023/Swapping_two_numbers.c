#include <stdio.h>

int main() {
    int a, b;

    printf("Enter any value for a: ");
    scanf("%d", &a);

    printf("Enter any value for b: ");
    scanf("%d", &b);

    // Swapping the values of a and b without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("The new a is %d\n", a);
    printf("The new b is %d\n", b);

    return 0;
}

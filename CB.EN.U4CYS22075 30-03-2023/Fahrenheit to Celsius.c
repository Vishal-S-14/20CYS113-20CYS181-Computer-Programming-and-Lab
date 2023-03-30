#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter any value for Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    printf("The Celsius is: %.2f", celsius);

    return 0;
}

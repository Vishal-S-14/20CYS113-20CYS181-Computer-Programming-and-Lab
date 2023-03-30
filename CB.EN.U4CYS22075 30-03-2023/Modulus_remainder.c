#include <stdio.h>

int main() {
  int a, b;
  float c, r;

  printf("Enter any value for a: ");
  scanf("%d", &a);

  printf("Enter any value for b: ");
  scanf("%d", &b);

  c = (float)a / b;

  r = a - b * c;

  printf("The remainder is: %.2f", r);

  return 0;
}

#include <stdio.h>

struct Quadratic {
    int r1, r2;
    int i1, i2;
} q;

int main() {
    scanf("%d%d%d%d", &q.r1, &q.i1, &q.r2, &q.i2);
    printf("%d+%di\n", (q.r1 + q.r2), (q.i1 + q.i2));
    printf("%d+%di\n", (q.r1 - q.r2), (q.i1 - q.i2));
    return 0;
}

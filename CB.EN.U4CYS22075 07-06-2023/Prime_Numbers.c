#include <stdio.h>

int isprime(int a) {
    
    for (int i = 2; i*i <= a; i++) {
        if (a % i == 0) {
            return 0; 
        }
    }

    return 1;
}


void generateprime(int s, int e) {
     printf("Prime numbers between %d and %d are: ", s,e);
    for (int i = s; i <= e; i++) {
        if (isprime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int s, e;
    scanf("%d", &s);
    scanf("%d", &e);
    generateprime(s, e);
    return 0;
}
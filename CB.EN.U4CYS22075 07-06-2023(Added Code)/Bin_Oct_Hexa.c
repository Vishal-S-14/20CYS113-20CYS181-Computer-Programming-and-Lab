#include <stdio.h>

void decimaltobinary(int a){
    int binary[32];
    int i = 0;
    while (a > 0) {
        binary[i] = a % 2;
        a = a / 2;
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void decimaltooctal(int a){
    printf("Octal equivalent: %o\n", a);
}
void decimaltohexadecimal(int a) {
    char hexadecimal[32];
    int i = 0;
    while (a > 0) {
        int rem = a % 16;
        char digit;
        if (rem < 10) {
            digit = rem + '0';
        } else {
            digit = rem - 10 + 'A';
        }
        hexadecimal[i] = digit;
        a = a / 16;
        i++;
    }
  
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}
int main(){
    int a;
    scanf("%d", &a);

    if (a <= 0){
        printf("Error: Value should be greater than 0");
    }
    else{
        decimaltobinary(a);
        decimaltooctal(a);
        decimaltohexadecimal(a);
    }
    return 0;
}

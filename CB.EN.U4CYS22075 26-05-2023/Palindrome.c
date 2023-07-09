#include<stdio.h>

int main(){
    int reverse=0,a;
    int original;
    scanf("%d",&a);
    original=a;
    while(a>0 || a<0){
        reverse=reverse*10+a%10;
        a=a/10;
    }
    if(reverse==original){
        printf("Is a palindrome.\n");
    }
    else {
        printf("Is not a palindrome.\n");
    }
    return 0;
}
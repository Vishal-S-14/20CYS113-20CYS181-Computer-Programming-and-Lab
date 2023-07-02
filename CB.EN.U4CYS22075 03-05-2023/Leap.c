#include<stdio.h>

int main(){
    int a;
    printf("Enter the specific year: ");
    scanf("%d",&a);
    
    if (a%400==0){
         printf("Leap Year");
    }
    else if (a%4==0){
        printf("Leap Year");
    }
    else {
	    printf("Not a Leap Year");
    }
    return 0;
}

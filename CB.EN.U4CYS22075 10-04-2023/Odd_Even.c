//Declaring Library//
#include<stdio.h>

int main() {
	int a;//Declaring a aVariable//
	printf("Enter your number: ");
	scanf("%d",&a);

	if (a%2==0) { /*Determine whether it is divisible by 2*/
		printf("The %d  is even\n",a);//If it is even//
	} else {
		printf("The %d is odd\n",a);//If it is odd//
	}

	return 0;
}


//Declaring the library//
#include<stdio.h>

int main() {
	int num,i,sum=0;//Declaring Variables//
	printf ("Enter your number of series: ");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++) { //Calculating loops to form sum of series//
		sum+=i;
		printf("The number of %d  value is %d \n",i,sum);
	}//Result will be shown//
	return 0;
}


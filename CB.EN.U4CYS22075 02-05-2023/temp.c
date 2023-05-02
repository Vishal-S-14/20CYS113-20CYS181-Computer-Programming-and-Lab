#include<stdio.h>

int main(){
	double t,T;//Declaring Variables for temperature and time
	printf("Enter the number of hours that freezer take: ");
	scanf("%lf",&t);
	T=(4*t*t)/(t+2)-20;//Using this formula
	printf("Freezer temperature is %f",T);//Result of the freezing temperature in celsius
	return 0;
}


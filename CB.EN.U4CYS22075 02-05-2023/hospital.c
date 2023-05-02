#include<stdio.h>

int main(){
	double vol,rate,time,t;//Declaring variables
	printf("Enter the volume to be infused(mL): ");
	scanf("%lf",&vol);
	printf("Enter the time of infused: ");
	scanf("%lf",&time);
	t=time/60;//Convert minutes into hours
	rate=vol/t;//Using Rate formula
	printf("The rate of the infusion is %f",rate);//Result for the rate
	return 0;
}

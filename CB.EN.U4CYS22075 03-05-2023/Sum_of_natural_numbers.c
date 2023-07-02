#include<stdio.h>

int main(){
	int n,sum=0;
	printf("Enter Your Number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	printf("The answer is %d\n",sum);
}
#include<stdio.h>

int main(){
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	if (0<n&&n<25){
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				printf("* ");
			}
			printf("\n");
		}

	}
	else{
		printf("Invalid Input");
	}
	
	return 0;
}
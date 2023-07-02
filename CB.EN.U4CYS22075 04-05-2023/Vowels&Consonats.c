#include<stdio.h>

int main(){
	char vowel[10]={'A','E','I','O','U','a','e','i','o','u'};
	char a;
	int count=0;
	printf("Enter your Alphabet: ");
	scanf("%c",&a);
	for(int i=0;i<10;i++){
		if(a==vowel[i]){
			count++;
		}
	}
	if(count==1){
		printf("%c is Vowel.\n",a);
	}
	else{
		printf("%c is Consonant.\n",a);
	}	
	return 0;
}
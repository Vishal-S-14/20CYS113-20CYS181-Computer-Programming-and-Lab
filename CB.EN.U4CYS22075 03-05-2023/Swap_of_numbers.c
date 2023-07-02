#include<stdio.h>
#include<math.h>
int main(){
	int n,i=0,reverse,last,first,final;
	scanf("%d",&n);
	first=n;
	while(first>=10){
		first=first/10;
		i=i+1;}
	last=n%10;
	reverse=last;
	for(int j=0;j<i;j++){
		reverse=reverse*10;}
	reverse+=n%(int)pow(10,i);
    reverse-=last;
    reverse+=first;
    printf("%d",reverse);
}
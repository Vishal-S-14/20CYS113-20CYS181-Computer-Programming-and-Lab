#include<stdio.h>
void isHarshad(int a){
    int x=a;
    int n;
    int sum=0;
    while(x>0){
        n=x%10;
        sum=sum+n;
        x=x/10;
    }
    if(a%sum==0){
        printf("%d is a Harshad number.",a);
    }
    else{
        printf("%d is not a Harshad number.",a);
    }
}
int main(){
    int a;
    scanf("%d",&a);
    if (a<=0){
        printf("Number should be greater than 0.");
    }
    else{
        isHarshad(a);
    }
    return 0;
}
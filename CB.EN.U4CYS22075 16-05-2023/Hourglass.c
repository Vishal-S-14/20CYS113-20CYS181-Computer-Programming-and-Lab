#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
 
    for (int i=0;i<2*n-1;i++) {
 
       
        int s;
        if (i < n) {
            s=2*i+1;
        }
        else {
            s=2*(2*n-i)-3;
        }

        for (int j=0;j<s;j++) {
            printf(" ");
        }
 
        for (int k=0; k<2*n-s;k++) {
            printf("%c ",k+'D');
        }
        printf("\n");
    }
return 0;
}
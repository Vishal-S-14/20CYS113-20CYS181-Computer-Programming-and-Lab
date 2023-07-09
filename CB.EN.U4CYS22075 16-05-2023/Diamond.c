#include<stdio.h>
int main()
{
    int n,m,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=9;
        for(m=1;m<=n-i;m++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",k);
            k--;
        }
        printf("\n");
    }
    for(i=n-1;i>=0;i--)
    {
        k=9;
        for(m=1;m<=n-i;m++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",k);
            k--;
        }
        printf("\n");
        
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int i, j, rows;

    scanf("%d", &rows);
    printf("*\n");
    
    for(i = 1; i <= rows; i++){
        printf("*");
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
        for(j = i-1; j >= 1; j--)
        {
            printf("%d", j);
        }
        
        printf("*\n");
    }
    for(i = rows-1; i >= 1; i--)
    {
        printf("*");
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for(j = i-1; j >= 1; j--)
        {
            printf("%d", j);
        }
        
        printf("*\n");
    }
    
    printf("*\n");
    
return 0;
}

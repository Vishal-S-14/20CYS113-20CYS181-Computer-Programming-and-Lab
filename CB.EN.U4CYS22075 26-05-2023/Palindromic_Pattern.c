#include <stdio.h>

int main()
{
    int i, j, rows;

    scanf("%d", &rows);
    printf("*\n");
    
    // Upper half of the pattern
    for(i = 1; i <= rows; i++){
        printf("*");
        
        // Print numbers in increasing order
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
        
        // Print numbers in decreasing order
        for(j = i-1; j >= 1; j--)
        {
            printf("%d", j);
        }
        
        printf("*\n");
    }
    
    // Lower half of the pattern
    for(i = rows-1; i >= 1; i--)
    {
        printf("*");
        
        // Print numbers in increasing order
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        
        // Print numbers in decreasing order
        for(j = i-1; j >= 1; j--)
        {
            printf("%d", j);
        }
        
        printf("*\n");
    }
    
    printf("*\n");
    
return 0;
}
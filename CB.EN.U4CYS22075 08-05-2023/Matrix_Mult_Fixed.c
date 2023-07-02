#include<stdio.h>

int main(){
    int i, j, k;
    int a[3][3], b[3][3], r[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }

   for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            r[i][j] = 0; 
            for(k = 0; k < 3; k++){
                r[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}

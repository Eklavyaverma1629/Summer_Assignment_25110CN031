#include <stdio.h>
int main(){
    int r, c,i,j,sum_p,sum_s;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("matrix is");
    for (i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf( "\n");
    }
    if (r == c) {
        for (i = 0; i < r; ++i) {
            sum_p = sum_p + matrix[i][i];
            sum_s= sum_s + matrix[i][r - i - 1];
        }
        printf("\nMain diagonal elements sum is = %d\n", sum_p);
        printf("Off-diagonal elements sum is = %d\n", sum_s);
    }
    else{
        printf("not a square matrix\n");
    }
    return 0;
}
#include <stdio.h>
int main() {
    int r, c,i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix1[r][c], matrix2[r][c], result[r][c];
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("\nResultant Matrix (Matrix 1 - Matrix 2):\n");
    for (i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

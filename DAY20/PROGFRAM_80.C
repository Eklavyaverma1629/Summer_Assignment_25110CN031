#include <stdio.h>
int main() {
    int r,sum, c, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n Column wise sums:\n");
    for ( j = 0; j < c; j++) { 
        sum = 0;
        for ( i = 0; i < r; i++) { 
            sum += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, sum);
    }
    return 0;
}

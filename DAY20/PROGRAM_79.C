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
    printf("\n Row Wise Sum \n");
    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of elements in Row %d = %d\n", i + 1, sum);
    }
    return 0;
}

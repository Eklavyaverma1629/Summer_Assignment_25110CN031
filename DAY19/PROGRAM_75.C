#include <stdio.h>
int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c], transpose[c][r];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j]; 
        }
    }
    printf("\nTranspose of Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

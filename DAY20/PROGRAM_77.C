#include <stdio.h>
int main()
{   
    int i,j,k,r1,c1,r2,c2;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);
   if (c1 == r2) {
    int matrix1[r1][c1], matrix2[r2][c2], multiply[r1][c2];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         multiply[i][j] = 0;
        }
    }
    for ( i = 0; i < r1; ++i) {
       for (j = 0; j < c2; ++j) {
           for ( k = 0; k < c1; ++k) {
              multiply[i][j] += matrix1[i][k] * matrix2[k][j];
           }
        }
    }
    printf("\nOutput Matrix:\n");
    for ( i = 0; i < r1; ++i) {
      for ( j = 0; j < c2; ++j) {
         printf("%d  ", multiply[i][j]);
        }
        printf("\n");
        
    }
 }
 else{
    printf("multiplication not possible");
 }
   return 0;
}
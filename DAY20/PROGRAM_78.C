#include<stdio.h>
int main() {
    int i,j,r, c,flag;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int matrix[r][c], transpose[c][r];
    printf("Enter matrix elements:\n");
    for ( i = 0; i < r; i++) {
        for( j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j]; 
        }
    }
    flag = 1;
    for(i=0; i<r; i++)
    {
        for(j=0;j<c; j++)
        {
            if(matrix[i][j] != transpose[i][j])
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");
    }
     else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }

    return 0;
}
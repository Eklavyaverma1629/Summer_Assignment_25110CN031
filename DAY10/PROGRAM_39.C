#include <stdio.h>
int main() {
   int i, j,space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (space = 1; space <=rows-i; space++) {
         printf(" ");
      }
      for( j = 1; j <= i; j++){
            printf("%d",j);
      }
      for(k=i-1;k>=1;k--){
        printf("%d",k);
      }
      printf("\n");
   }
   return 0;
}


#include <stdio.h>
int main() {
   int i, j,space, rows, k ;
   char ch;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (space = 1; space <=rows-i; space++) {
         printf(" ");
      }
      ch='A';
      for( j = 1; j <= i; j++){
            printf("%c",ch);
            ch++;
      }
      ch-=2;
      for(k=1;k<i;k++){
        printf("%c",ch);
        ch--;
      }
      printf("\n");
   }
   return 0;
}


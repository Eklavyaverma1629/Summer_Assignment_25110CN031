#include<stdio.h>
int main(){
    int rows,i,j;
    printf("ENTER NO OF ROWS :");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        char ch="A";
        for(j=1;j<=i;j++){
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
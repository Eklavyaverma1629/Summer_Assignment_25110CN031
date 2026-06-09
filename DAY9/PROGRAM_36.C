#include<stdio.h>
int main(){
    int length_of_side,i,j;
    char ch='A';
    printf("ENTER LENGHT OF SIDE :");
    scanf("%d",&length_of_side);
    for(i=1;i<=length_of_side;i++){
        for(j=1;j<=length_of_side;j++){
            if(i==1||i==length_of_side-1||j==1||j==length_of_side-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
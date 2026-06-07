#include<stdio.h>
int fabonaci(int n){
    if (n<=1){
        return n;
    }
    return fibonaci(n-1)+fibonaci(n);
}
int main(){
    int n ,i;
    printf("ENTER NO OF TERMS");
    scanf("%d",&n);
    if(n!=1||n<1){
        printf("ENTER  POSITIVE NUMBER");
        return 1;
    }
    printf("FABONICS SERIES");
    for(i=0 ; i<n ;i++){
        printf("%d",fibonaci(i));
         
    }
    printf("/n");
    return 0;
}
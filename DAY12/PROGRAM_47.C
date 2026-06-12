#include <stdio.h>
void Fibonacci(int n) ;
int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Please enter a positive integer.");
    } else {
        printFibonacci(num);
    }
    return 0;
}    

void Fibonacci(int n){
        int a = 0, b = 1, c;
        printf("Fibonacci Series: ");
        for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%d ",a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        c = a + b;
        a = b;
        b= c;
        printf("%d ",c);
    }
}

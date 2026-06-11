#include <stdio.h>
int Factorial(int n);
int main() {
    int num,result;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("FACTORIAL OF NEGATIVE NUMBER NOT POSSIBLE.\n");
    } else {
        result = Factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }
    return 0;
}
int Factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; 
    }
    return fact;
}

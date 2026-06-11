#include <stdio.h>
int Sum(int num1, int num2);
int main() {
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = Sum(a, b);
    printf("The sum of %d and %d is: %d\n", a, b, result);
    return 0;
}
int Sum(int num1, int num2) {
    return (num1 + num2);
}

#include <stdio.h>
int Max(int num1, int num2);
int main() {
    int a, b, max;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    max = Max(a, b);
    printf("The maximum number is: %d\n", max);
    return 0;
}
int Max(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

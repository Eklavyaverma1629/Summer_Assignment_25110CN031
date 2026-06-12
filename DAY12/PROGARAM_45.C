#include <stdio.h>
int Palindrome(int n) ;
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (Palindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    return 0;
}
int Palindrome(int n) {
    int reversed = 0,remainder,x;
    x= n;
    if (n < 0) {
        return 0;
    }
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return (x == reversed);
}


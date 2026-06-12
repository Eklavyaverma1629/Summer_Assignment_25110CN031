#include <stdio.h>
int Perfect(int n);
int main() {
    int num;
    printf("Enter  number: ");
    scanf("%d", &num);
    if (Perfect(num)) {
        printf("%d IS A PERFECT NUMBER.\n", number);
    } else {
        printf("%d IS NOT A PERFECT NUMBER.\n", number);
    }
    return 0;
}
int Perfect(int n) {
    
    int i,sum=1;
    if (n <= 1) {
        return 0;
    }
    for ( i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == n);
}
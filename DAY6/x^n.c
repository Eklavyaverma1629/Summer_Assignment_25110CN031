#include <stdio.h>
int main() {
    int x, result = 1,n, i;
    
    printf("Enter a base number: ");
    scanf("%d", &x);

    printf("Enter exponent: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        result *= x;
    }
    printf("%d ^ %d = %d", x,n,result);

    return 0;
}

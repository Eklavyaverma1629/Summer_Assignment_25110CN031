#include <stdio.h>

int main() {
    int binary,decimal = 0, base = 1, remainder,temp;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    temp=binary;
    while (temp > 0) {
        remainder = temp % 10;     
        decimal += remainder * base; 
        temp = temp / 10;          
        base = base * 2; 
    }

    printf("The Binary value = %lld\n", binary);
    printf("The Decimal value = %d\n", decimal);

    return 0;
}

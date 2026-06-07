#include <stdio.h>
int main()
{
    int decimal, temp, binary,rem, base = 1;
    binary = 0;
    printf("Enter any decimal number: ");
    scanf("%d", &decimal);
    temp = decimal;
    while(temp > 0)
    {
        rem = temp % 2;
        binary = (rem * base) + binary;
        temp /= 2;
        base *= 10;
    }

    printf("Decimal number = %d\n", decimal);
    printf("Binary number = %d", binary);

    return 0;
}
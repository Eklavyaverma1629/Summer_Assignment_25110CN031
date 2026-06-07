#include<stdio.h>
int main() {
    int largestPrime = -1 ,i,num,result;
    printf("ENTER NUMVBER");
    scanf("%d",&num);

    while (num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    for ( i = 3; i * i <= num; i += 2) {
        while (num % i == 0)  {
            largestPrime = i;
            num /= i;
        }
    }

    if (num > 2) {
        largestPrime = num;
    }
    printf("%d LARGEST PRIME FACTOR IS",largestPrime;
    return 0;
}
#include <stdio.h>
#include <math.h>
int Armstrong(int num);
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (Armstrong(n)) {
        printf("%d s an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}
int Armstrong(int num) {
    int x,rem,result = 0,count=0;
    x=num;
    while (x!= 0) {
        x /= 10;
        count++;
    }
    x= num;
    while (x != 0) {
        rem=x % 10;
        result += pow(rem, count);
        x/= 10;
    }
    if (result == num) {
        return 1; 
    } else {
        return 0;
    }
}

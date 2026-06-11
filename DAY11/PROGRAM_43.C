#include <stdio.h>
int Prime(int n);
int main() {
    int num;
    printf("ENTER NUMBER");
    scanf("%d",&num);
    if (Prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is NOT a prime number.\n", num);
    }
    return 0;
} 

int Prime(int n){
    int i,count = 0;
    if (n <= 1){
        return 0;
    }   
    else {
        for (i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
        }
        if (count > 2){
            return 0;
        }
        else{
            return 1;
        }
    }
}
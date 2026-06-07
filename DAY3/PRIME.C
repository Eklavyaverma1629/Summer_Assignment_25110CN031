#include <stdio.h>
int main() {
    int num,i,count = 0;
    printf("ENTER NUMBER");
    scanf("%d",&num);
    if (num <= 1)
        printf("%d is NOT prime", num);
    else {
        for (i = 1; i <= num; i++) {
            if (num % i == 0)
                count++;
        }
        if (count > 2){
            printf("%d is NOT prime", num);
        }
        else{
            printf("%d is prime", num);
        }
    }
    return 0;
}
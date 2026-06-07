#include <stdio.h>
int main() {
    int num,count=0;
    printf("ENTER NUBER");
    scanf("%d",&num);
    while (num > 0) {
        num &= (num - 1); 
        count++; 
    }
    printf("Number of set bits in %u is: %d", num,count);

    return count;
}


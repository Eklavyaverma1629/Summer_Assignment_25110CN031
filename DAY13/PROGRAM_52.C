#include <stdio.h>
int main() {
    int size,i,even_count=0,odd_count=0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]);
    }
    for (i = 0; i < size; i++) {
        if (arry[i]%2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }
    printf("Total Even elements: %d\n", even_count);
    printf("Total Odd elements: %d", odd_count);
}
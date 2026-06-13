#include <stdio.h>
int main() {
    int size,i;
    int largest, smallest;
    printf("Enter the number of elements:\n");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements:");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]);
    }
    largest = arry[0];
    smallest = arry[0];
    for(i = 1; i < size; i++) {
        if(arry[i] > largest) {
            largest = arry[i];
        }
        if(arry[i] < smallest) {
            smallest = arry[i];
        }
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d", smallest);
    return 0;
}

#include <stdio.h>
int main() {
    int size,i,sum=0;
    float ave;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size]; 
    printf("Enter elements: ");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++) {
        sum += arr[i];
    }
    ave = (float)sum / size;
    printf("Sum of the array elements = %d\n", sum);
    printf("Average of the array elements = %f", ave);
    return 0;
}

#include <stdio.h>
int main() {
    int size, i;
    int first, second;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    first = second =arr[0];
    for (i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first; 
            first = arr[i]; 
        }
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    printf("The second largest element is: %d\n", second);

    return 0;
}

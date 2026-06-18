#include <stdio.h>
int main() {
    int size1, size2, i;
    printf("Enter the size of the first and second array: ");
    scanf("%d \n %d", &size1 ,&size2);
    printf("Enter elements for the first array:\n");
    
    int arry1[size1], arry2[size2], new[size1+size2];
    for(i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry1[i]);
    }
    printf("Enter  elements for the second array:\n");
    for(i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry2[i]);
    }
    for (i = 0; i < size1; i++) {
        new[i] = arry1[i];
    }
    for (i = 0; i < size2; i++) {
        new[size1 + i] = arry2[i];
    }
    printf("\nThe merged array is:\n");
    for (i = 0; i < (size1+size2); i++) {
        printf("%d ", new[i]);
    }
    return 0;
}

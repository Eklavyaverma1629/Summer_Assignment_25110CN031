#include <stdio.h>
int Duplicate(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; 
        }
    }
    return 0; 
}
int main() {
    int size1, size2, i,j,k=0;
    printf("Enter the size of the first and second array: ");
    scanf("%d \n %d", &size1 ,&size2);
    printf("Enter elements for the first array:\n");
    int arry1[size1], arry2[size2];
    for(i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry1[i]);
    }
    printf("Enter  elements for the second array:\n");
    for(i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry2[i]);
    }
   int new[size1+size2];           
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arry1[i] == arry2[j]) {
                if (!Duplicate(new, k, arry1[i])) {
                    new[k] = arry1[i];
                    k++;
                }
                break; 
            }
        }
    }
    printf("intersect arry\n");
    for (i = 0; i < k; i++) {
            printf("%d ", new[i]);
    }
}
#include <stdio.h>
int main(){
    int size, i,j,temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]); 
    }
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arry[i] < arry[j]) {
                temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
    }
    printf("\n");
    printf("Array sorted in descending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arry[i]);
    }

    return 0;
}

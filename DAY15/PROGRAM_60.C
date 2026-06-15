#include <stdio.h>
int main(){
    int end,size,i,count=0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]);    
    }
    printf("Array before moving\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arry[i]);
    }
    
    for (int i = 0; i < size; i++) {
        if (arry[i] != 0) {
            arry[count++] = arry[i];
        }
    }
    while (count < size) {
        arry[count++] = 0;
    }
    printf("\nArray after moving \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arry[i]);
    }
    return 0;
}

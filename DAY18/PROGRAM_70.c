#include <stdio.h>
 int main(){
    int size, i,min_idx,j,temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]); 
    }
    for (int i = 0; i < size - 1; i++) {
         min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arry[j] < arry[min_idx])
                min_idx = j;
        }
        int temp = arry[min_idx];
        arry[min_idx] = arry[i];
        arry[i] = temp;
    }
    for ( i=0; i < size; i++) {
        printf("%d ", arry[i]);
    }
    return 0;
}

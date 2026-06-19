#include <stdio.h>
int main(){
    int i, j,size, temp;
    printf("Enter the size of array: ");
    scanf("%d ",&size);
    int arry[size];
    for(i = 0; i < size; i++) {
        printf("Element %d :", i+1);
        scanf("%d", &arry[i]);
    }
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arry[j] > arry[j + 1]) {
                temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
    }
    printf("sorted arry");
    for (int i = 0; i < size; i++) {
        printf("%d ", arry[i]);
    }
    return 0;
}

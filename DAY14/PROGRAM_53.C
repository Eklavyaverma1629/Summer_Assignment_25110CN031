#include <stdio.h>
int main() {
    int size,i,target;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &target);
      for ( i = 0; i < size; i++) {
        if (arry[i] == target){
            printf("ELEMENT %d FOUND AT INDEX [%d] ",target,i);
            break;
        }
    }
    return 0;

}
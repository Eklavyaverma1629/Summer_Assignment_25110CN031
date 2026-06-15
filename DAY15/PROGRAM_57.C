#include<stdio.h>
 int main(){
    int end,start = 0,size, i,temp;
    end=size-1;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]);    
    }
    while (start < end) {
        temp = arry[start];
        arry[start] = arry[end];
        arry[end] = temp;
        start++;
        end--;
    }
    printf("reversed aarry\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ",arry[i] );
    }
    return 0;
 }
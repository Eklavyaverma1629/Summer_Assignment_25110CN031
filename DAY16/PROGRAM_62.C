#include<stdio.h>
 int main(){
    int size, i,max,result=0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]); 
    }
    max = arry[0];
    for ( i = 0; i < size; i++)
        arry[arry[i] % size] += size;
    for (i = 1; i < size; i++) {
        if (arry[i] > max) {
            max = arry[i];
            result = i;
        }
    }
    printf("max frequency element is %d",result);
    return 0;
 }
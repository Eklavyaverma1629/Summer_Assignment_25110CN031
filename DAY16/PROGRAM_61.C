#include<stdio.h>
 int main(){
    int size, i,b,c;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]);
    }
    b = arry[0];
    for (i = 1; i < size - 1; i++){
        b = b ^ arry[i];
    }
    for (i = 2, c = 1; i <= size; i++){
        c = c ^ i;
    } 
    c = c ^ b;  
    printf("Missing element is : %d \n", c);
    return 0;
}
#include <stdio.h>

int main() {
    int size, i, j,num,frq=0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size], freq[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]);    
    }
    printf("Enter number to be counted: ");
    scanf("%d", &num);
    for(i=0; i<size; i++){
        if(arry[i]==num){
        frq++; 
        }  
    }
    printf("element %d frequency %d",num, frq);
    return 0;
}

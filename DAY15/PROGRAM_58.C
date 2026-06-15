#include<stdio.h>
 int main(){
    int end,size,i,N;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]);    
    }
    printf("Enter number of times to left rotate: ");
    scanf("%d", &N);
    N = N % size;
    printf("Array before rotationn\n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arry[i]);
    }
    for(i=1; i<=N; i++)
    {
        int i, first;
        first = arry[0];
        for(i=0; i<(size-1); i++){
           arry[i] = arry[i + 1];
        }
        arry[size-1] = first;
    }
    printf("\n\nArray after rotation\n");
     for(i=0; i<size; i++)
    {
        printf("%d ", arry[i]);
    }
    return 0;
 }
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
    printf("Enter number of times to  rotate right: ");
    scanf("%d", &N);
    N = N % size;
    printf("Array before rotationn\n");
    for(i=0; i<size; i++)
    {
        printf("%d ", arry[i]);
    }
    for(i=1; i<=N; i++)
    {
        int i, last;
        last= arry[size-1];
        for(i=size-2;i>=0; i--){
           arry[i + 1]=arry[i];
        }
        arry[0] = last;
    }
    printf("\n\nArray after rotation\n");
     for(i=0; i<size; i++)
    {
        printf("%d ", arry[i]);
    }
    return 0;
 }
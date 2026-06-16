 #include<stdio.h>
 int main(){
    int size, i,found=0,sum;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]); 
    }
     printf("enter required sum : ");
     scanf("%d",&sum);
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arry[i] + arry[j] == sum) {
                printf("Pair found: (%d, %d) at indices [%d] and [%d]\n", arry[i], arry[j], i, j);
            }
        }   
    }
    return 0;
}
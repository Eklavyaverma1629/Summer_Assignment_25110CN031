 #include<stdio.h>
 int main(){
     int size, i, j;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]);    
    }
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(arry[i]==arry[j+1])
            {
                printf("Number %d has duplicate values\n",arry[i]);
            }
        }
    }
    return 0;
}

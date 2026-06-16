 #include <stdio.h>
int main()
{
    int size, i,j,count = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);
    int arry[size], temp[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]); 
    }
    printf("\nArray before  Removing Duplicates: ");
    for(i = 0; i < size; i++) {
        printf("Element %d: ",arry[i]);
    }
    for (i = 0; i < size; i++){
        for (j = 0; j < count; j++)
        {
          if (arry[i] == temp[j])
            break;
        }
        if (j == count)
        {
          temp[count] = arry[i];
          count++;
        }
    }
    printf("\nArray After  Removing Duplicates: ");
    for (int i = 0; i < count; i++){
        printf(" Element %d\n:", temp[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int i,first,last,search,middle,size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arry[size];
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arry[i]); 
    }
   printf("Enter element to find\n");
   scanf("%d", &search);
   first = 0;
   last = size - 1;
  middle = (first+last)/2;
  while (first <= last) {
    if (arry[middle] < search){
      first = middle + 1;
    }
    else if (arry[middle] == search){
      printf("%d found at location %d \n", search, middle+1);
      break;
    }
    else{
      last = middle - 1;
    }
    middle = (first + last)/2; 
  }
  if (first > last){
    printf("Not found! %d isn't present in the list.\n", search);
  }
  return 0;
}

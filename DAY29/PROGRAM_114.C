#include <stdio.h>
#include <stdlib.h>
#define MAX_CAPACITY 1000 
void createArray(int arr[], int *size);
void displayArray(const int arr[], int size);
void insertElement(int arr[], int *size);
void deleteElement(int arr[], int *size);
void searchElement(const int arr[], int size);

int main() {
    int arr[MAX_CAPACITY];
    int size = 0; 
    int choice;

    while (1) {
        printf("\n    ARRAY OPERATING SYSTEM MENU     ");
        printf("\n1. Initialize / Create Array");
        printf("\n2. Display System Array Items");
        printf("\n3. Insert Element at Location");
        printf("\n4. Delete Element from Location");
        printf("\n5. Search for an Element Value");
        printf("\n6. Shut Down / Exit System");
        printf("\n");
        printf("\nEnter your system command choice (1-6): ");
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input format. Restarting menu...\n");
            while (getchar() != '\n'); 
            continue;
        }

        switch (choice) {
            case 1:
                createArray(arr, &size);
                break;
            case 2:
                displayArray(arr, size);
                break;
            case 3:
                insertElement(arr, &size);
                break;
            case 4:
                deleteElement(arr, &size);
                break;
            case 5:
                searchElement(arr, size);
                break;
            case 6:
                printf("\nShutting down Array Operating System. Goodbye!\n");
                exit(0);
            default:
                printf("\n Command key unassigned. Please choose options 1 to 6.\n");
        }
    }
    return 0;
}
void createArray(int arr[], int *size) {
    int n, i;
    printf("\nEnter the number of initial system elements (Max %d): ", MAX_CAPACITY);
    scanf("%d", &n);

    if (n < 0 || n > MAX_CAPACITY) {
        printf(" Size allocation aborted.\n");
        return;
    }

    *size = n;
    if (n > 0) {
        printf("Enter %d integer values:\n", n);
        for (i = 0; i < *size; i++) {
            printf("Element [%d]: ", i);
            scanf("%d", &arr[i]);
        }
        printf("System array successfully created and mapped.\n");
    } else {
        printf("System initialized with an empty array.\n");
    }
}
void displayArray(const int arr[], int size) {
    int i;
    if (size == 0) {
        printf("\n System memory array empty. Nothing to print.\n");
        return;
    }
    printf("\nCurrent Array Element\n");
    for (i = 0; i < size; i++) {
        printf("[%d]\t%d\n", i, arr[i]);
    }
}
void insertElement(int arr[], int *size) {
    int i, pos, element;
    if (*size >= MAX_CAPACITY) {
        printf("\n Array has reached max memory capacity (%d).\n", MAX_CAPACITY);
        return;
    }

    printf("\nEnter target allocation index position (0 to %d): ", *size);
    scanf("%d", &pos);

    if (pos < 0 || pos > *size) {
        printf(" Index out of bound thresholds. Write aborted.\n");
        return;
    }

    printf("Enter integer value to insert: ");
    scanf("%d", &element);
    for (i = *size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element;
    (*size)++;
    printf("SUCCESS Element written into memory position %d.\n", pos);
}
void deleteElement(int arr[], int *size) {
    int i, pos;
    if (*size == 0) {
        printf("\n Underflow exception. System memory contains no values to erase.\n");
        return;
    }
    printf("\nEnter structural index target to drop (0 to %d): ", *size - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= *size) {
        printf(" Selected index is out of bounds.\n");
        return;
    }

    printf(" element %d removed from allocation table.\n", arr[pos]);
    for (i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
void searchElement(const int arr[], int size) {
    int i, target, found = 0;

    if (size == 0) {
        printf("\nALERT! System holds no indices. Searching unallocated register is restricted.\n");
        return;
    }

    printf("\nEnter the database element integer to query: ");
    scanf("%d", &target);

    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("MATCH FOUND Key %d detected at array index slot [%d].\n", target, i);
            found = 1;
        }
    }

    if (!found) {
        printf("no record found");
    }
}

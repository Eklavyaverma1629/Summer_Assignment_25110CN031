#include <stdio.h>
int get_length(char str[]);
void copy_string(char target[], char source[]);
void concatenate_strings(char str1[], char str2[], char result[]);
int compare_strings(char str1[], char str2[]);
void reverse_string(char str[]);

int main() {
    int choice;
    char str1[1000], str2[1000], result[2000];

    while (1) {
        printf("\n String Operating System \n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%int", &choice);
        
        while (getchar() != '\n'); 

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%[^\n]", str1);
                printf("Length of the string: %d\n", get_length(str1));
                break;

            case 2:
                printf("Enter source string: ");
                scanf("%[^\n]", str1);
                copy_string(str2, str1);
                printf("Copied string (Target): %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%[^\n]", str1);
                while (getchar() != '\n'); 
                printf("Enter second string: ");
                scanf("%[^\n]", str2);
                concatenate_strings(str1, str2, result);
                printf("Concatenated string: %s\n", result);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%[^\n]", str1);
                while (getchar() != '\n'); 
                printf("Enter second string: ");
                scanf("%[^\n]", str2);
                int cmp = compare_strings(str1, str2);
                if (cmp == 0) {
                    printf("Strings are equal.\n");
                } else if (cmp > 0) {
                    printf("First string is greater.\n");
                } else {
                    printf("Second string is greater.\n");
                }
                break;

            case 5:
                printf("Enter a string to reverse: ");
                scanf("%[^\n]", str1);
                reverse_string(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 6:
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }
    }
    return 0;
}
int get_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
void copy_string(char target[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0'; 
}
void concatenate_strings(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0'; 
}
int compare_strings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}
void reverse_string(char str[]) {
    int len = get_length(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

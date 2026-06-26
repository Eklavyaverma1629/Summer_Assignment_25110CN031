#include <stdio.h>
#include <string.h>
void Common(char str1[], char str2[]) {
    int freq1[200] = {0}, freq2[200] = {0},found = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n') {
            freq1[(unsigned char)str1[i]]++;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n') {
            freq2[(unsigned char)str2[i]]++;
        }
    }
    printf("Common characters: ");
    for (int i = 0; i < 200; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            int min = (freq1[i] < freq2[i]) ? freq1[i] : freq2[i];
            
            for (int j = 0; j < min; j++) {
                printf("%c ", i);
            }
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%[^\n]", str1);

    printf("Enter the second string: ");
    scanf("%[^\n]", str2);

    findCommonCharacters(str1, str2);
    return 0;
}

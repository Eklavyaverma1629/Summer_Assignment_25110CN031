#include <stdio.h>
#include <string.h>

int main() {
    char sentence[2000],word[2000],longest[2000];
    
    int i = 0, j = 0;
    int max_len = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);


    while (sentence[i] != '\0') {
        if (!isspace(sentence[i]) && sentence[i] != '\0') {
            word[j] = sentence[i];
            j++;
        } 
        else {
            if (j > 0) {
                word[j] = '\0'; 
                if (j > max_len) {
                    max_len = j;
                    strcpy(longest, word);
                }
                j = 0; 
            }
        }
        i++;
    }
    if (max_len > 0) {
        printf("The longest word is: %s\n", longest);
        printf("Length of the longest word: %d\n", max_len);
    } else {
        printf("No valid words found.\n");
    }

    return 0;
}

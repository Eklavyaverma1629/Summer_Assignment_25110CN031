#include <stdio.h>
#include <string.h>
int main() {
    char str[500],words[500][100],temp[100];
    int wordCount = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    str[strcspn(str, "\n")] = '\0';
    char *token = strtok(str, " ");
    while (token != NULL && wordCount < 500) {
        strncpy(words[wordCount], token, 500 - 1);
        words[wordCount][100- 1] = '\0'; 
        wordCount++;
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < wordCount - 1; i++) {
        for (int j = 0; j < wordCount - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    printf("Words sorted by length:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}

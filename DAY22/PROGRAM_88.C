#include <stdio.h>
int main() {
    char str[1000], strn[100];
    int i, j = 0;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    for(i = 0; str[i] != '\0'; ++i) {
        if(str[i] != ' ') {
            strn[j++] = str[i];
        }
    }
    strn[j] = '\0'; 
    printf("String after removing spaces: %s\n", strn);

    return 0;
}

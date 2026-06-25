#include <stdio.h>
#include <string.h>
void compressString(char *str) {
    if (str == NULL || str[0] == '\0') {
        return; 
    }
    int r = 0;  
    int w= 0; 
    int length = strlen(str);
    while(r < length) {
        char c = str[r];
        int count = 0;
        while (r < length && str[r] == c) {
            count++;
            r++;
        }
        str[w++] = c;
        if (count>1){
            char c[12];
            sprintf(c, "%d", count);
            for (int i = 0; c[i] != '\0'; i++) {
                str[w++] = c[i];
            }
        }
    }
    str[w] = '\0';
}
int main() {
    char str[1000];
     printf("Enter a 1 string: ");
    scanf("%[^\n]", str);
    compressString(str);
    printf("Compressed String: %s\n", str);
    return 0;
}

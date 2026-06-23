#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    int count[2000] = {0},i;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
        printf("The first non-repeating character is: '%c'\n", str[i]);
        break;
        }
    }
    printf("no nonrepeating char");
    return  0; 
}

#include <stdio.h>
#include <string.h>

int Repeat(char* s)
{
    int p = -1, i, j;
    for (i = 0; i < strlen(s); i++) {
        for (j = i + 1; j < strlen(s); j++) {
            if (s[i] == s[j]) {
                p = i;
                break;
            }
        }
        if (p != -1)
            break;
    }

    return p;
}
int main()
{
    char str[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    int result= Repeat(str);
    if (result == -1)
        printf("Not found");
    else{
            printf(" The first non-repeating character is : %c", str[result]);
    }
    return 0;

}
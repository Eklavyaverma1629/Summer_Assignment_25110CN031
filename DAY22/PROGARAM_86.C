#include <stdio.h>
int main() {
    char str[1000];
    int i, count=0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (i = 0;str[i] != '\0';i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
}
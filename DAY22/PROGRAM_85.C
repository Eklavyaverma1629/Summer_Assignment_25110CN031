#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int i, len,flag= 1;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0; 
            break;
        }
    }
    if (flag) {
        printf("%s is a palindrome.\n",str);
    } else {
        printf("%s is not a palindrome.\n",str);
    }

    return 0;
}
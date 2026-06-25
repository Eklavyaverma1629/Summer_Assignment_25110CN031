#include <stdio.h>
#include <string.h>
int Rotations(char s1[], char s2[]) {
    int n = strlen(s1);
    char last;
    for (int i = 0; i < n; ++i) {
        if (strcmp(s1, s2) == 0)
            return 0;
        last = s1[n-1];
        for (int j = n-1; j > 0; j--) {
            s1[j] = s1[j-1];
        }
        s1[0] = last;
    }
    return 1;
}

int main() {
    char str1[1000] , str2[1000];
    printf("Enter a 1 string: ");
    scanf("%[^\n]", str1);
    printf("Enter a 2 string: ");
    scanf("%[^\n]", str2);
    if(rotation(str1,str2)){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
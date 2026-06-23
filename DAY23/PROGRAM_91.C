#include <stdio.h>
#include <string.h>
int main(){
    char str1[2000],str2[2000];
    int flag;
    printf("Enter a 1 string: ");
    scanf("%[^\n]", str2);
    printf("Enter a 2 string: ");
    scanf("%[^\n]", str2);
    flag = anagram(str1, str2);
    if (flag == 1)
        printf("%s and %s are anagrams.\n", str1, str2);
    else
        printf(" %s and %s are not anagrams.\n", str1, str2);
    return 0;
}
int anagram(char array1[], char array2[])
{
    int num1[200] = {0}, num2[200] = {0}, i = 0;
 
    while (array1[i] != '\0')
    {
        num1[array1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (array2[i] != '\0')
    {
        num2[array2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}
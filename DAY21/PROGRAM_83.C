#include<stdio.h>
int main() 
{  
    int vowels = 0, consonants = 0,i; 
    char str[1000],ch;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("String is : %s", str); 

    for (i = 0; str[i] != '\0'; i++) { 
        ch = str[i]; 
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U') 
            vowels++; 
        else if (ch == ' ') 
            continue; 
        else
            consonants++; 
    } 
    printf("\nVowels: %d", vowels); 
    printf("\nConsonants: %d", consonants); 
   return 0;
}


#include <stdio.h>
int main()
{
    char str[100];
    int freq[200]; 
    int i = 0, max;
    int ascii;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for(i=0; i<200; i++)
    {
        freq[i] = 0;
    }
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
    max = 0;
    for(i=0; i<200; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }
    printf("Maximum occurring character is '%c' = %d times.", max, freq[max]);
    return 0;
}
#include<stdio.h>
int main()
{
    char str[2000],ch;
    int freq[1000] = {0}, i;
    printf("Enter the string:\n");
    scanf("%[^\n]", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("The frequency of %c is %d\n", i, freq[i]);
        }
    }
    return 0;
}
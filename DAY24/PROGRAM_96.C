#include <stdio.h>
#include <string.h>
int main(){
    char str[2000];
    int l,i,j,k;
    printf("Enter a str: ");
    scanf("%[^\n]", str);
    l=strlen(str);

    for(i = 0; i < l; i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
    }
    printf("\n The Final String after Removing All Duplicates = %s ", str);
	
  	return 0;
}

	
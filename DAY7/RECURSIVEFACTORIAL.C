#include <stdio.h>
int factorial(int num)
{
    if(num == 0) 
        return 1;
    else
        return num * factorial(num - 1);
}
int main()
{
    int num,result;
    printf("Enter any number: ");
    scanf("%d", &num);
    result = factorial(num); 
    printf("FACTORIAL OF %d IS %d", num, result);
    return 0;
}



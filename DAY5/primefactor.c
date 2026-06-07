Skip to content
Codeforwin
Menu
C program to find prime factors of a number
CategoriesC programming
2 mins read
July 20, 2025
Write a C program to input a number from user and find Prime factors of the given number using loop. C program to list all prime factors of a given number. Logic to find prime factors of a number in C programming.

Example

Input

Input any number: 10
Output

Prime factors of 10: 2, 5

Required knowledge
Basic C programming, If statement, For loop, Nested loop

What is Prime factor?
Factors of a number that are prime numbers are called as Prime factors of that number. For example: 2 and 5 are the prime factors of 10.

Logic to check prime factors of a number
Step by step descriptive logic to find prime factors.

Input a number from user. Store it in some variable say num.
Run a loop from 2 to num/2, increment 1 in each iteration. The loop structure should look like for(i=2; i<=num/2; i++).
You may think why loop from 2 to num/2? Because prime number starts from 2 and any factor of a number n is always less than n/2.

Inside the loop, first check if i is a factor of num or not. If it is a factor then check it is prime or not.
Print the value of i if it is prime and a factor of num.

Program to find prime factors of a number

/**
 * C program to find all prime factors of a given number
 */

#include <stdio.h>

int main()
{
    int i, j, num,flag;
    printf("ENTER NUMBER");
    scanf("%d", &num);

    printf("All Prime Factors of %d are:/n", num);
    for(i=2; i<=num; i++){
        if(num%i==0)
        {
            flag= 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag==1)
            {
                printf("%d", i);
            }
        }
    }

    return 0;
}

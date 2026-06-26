#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number, guess;
    int attempts = 0;
    srand(time(NULL));
    number = (rand() % 100) + 1;

    printf("   Welcome to the Number Guessing Game!  \n");
    printf("I have picked a secret number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > number) {
            printf("Too high! Try a lower number.\n\n");
        } else if (guess < number) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("\n CONGRATULATIONS! You got it!\n");
            printf("You guessed the secret number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);
    return 0;
}

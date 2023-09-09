#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    // providing seed to the random number
    srand(time(NULL));

    // generating random integer between 1 to 10
    int randomNumber = (rand() % 10) + 1;

    printf("Random number: %d\n", randomNumber);

    puts("Welcome To The Guess The Number Game");
    puts("Computer has chosen a number between 1 to 10 and you have 3 chances to guess the right number\n");

    int guess;
    int count = 3;

    do {
        printf("Take a guess (%d guesses left):\n", count);

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a number.\n");
            exit(EXIT_FAILURE);
        }

        count--;

        if (guess == randomNumber) {
            printf("%d is the correct guess!\n", guess);
            break;
        }

        (guess > randomNumber) ? printf("%d is too high\n", guess) : printf("%d is too low\n", guess);
    } while (count > 0);


    return EXIT_SUCCESS;
}

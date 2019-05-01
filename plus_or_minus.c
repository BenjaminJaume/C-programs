#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int random;
int guess = 0;
int iteration = 1;
int value_max = 10000;

int main()
{
    srand(time(NULL));

    do {
        random = rand() % value_max;
    } while(random <= 0 || random >= value_max);

    printf("Welcome to the game \"Plus or Minus\"\n");
    printf("Guess the number between 0 and 10,000\n\n");

    do {
        printf("Guess ? ");
        scanf("%d", &guess);

        if(guess < random) {
            printf("Wrong, but it is higher\n\n");
            iteration++;
        } else if(guess > random) {
            printf("Wrong, but it is lower\n\n");
            iteration++;
        }
    } while(guess != random);

    printf("\nCongratulations, you won !\n");
    printf("You tried to guess %d times, only !\n\n", iteration);
    printf("Thanks for playing :)\n\n");
    return 0;
}

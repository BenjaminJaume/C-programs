#include <stdio.h>
#include <stdlib.h>

int hours;
int minutes;
int seconds;

int input;
int temp;

int main() {
    printf("Number of seconds? ");
    scanf("%d", &input);

    hours = input / 3600;
    temp = input % 3600;

    minutes = temp / 60;
    seconds = temp % 60;

    printf("\n");
    printf("HH:MM:SS\n");
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int number;
int range;

int number_found;

int main()
{
    printf("Range? ");
    scanf("%d", &range);

    printf("Number please? ");
    scanf("%d", &number);

    number_found = (number / range) + 1;

    printf("\n");

    printf("Your number belongs to the range number %d : ", number_found);
    printf("Range[%d;%d]\n", ((number_found - 1) * range), number_found * range);
    return 0;
}

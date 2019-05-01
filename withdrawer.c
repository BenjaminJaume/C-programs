#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int banknotes[5] = {100, 50, 20, 10, 5};

size_t size_banknotes = sizeof banknotes / sizeof banknotes[0];

int money_wanted;
int banknotes_to_withdraw[5];
int money_left;

int i;

int main()
{
    printf("Banknotes available on this ATM: ");
    for(i = 0; i < size_banknotes; i++) {
        printf("%d", banknotes[i]);
        if(i == size_banknotes-1) {
            printf(".");
        } else {
            printf(", ");
        }
    }

    printf("\n\n");

    printf("How much do you want to withdraw? ");
    scanf("%d", &money_wanted);

    money_left = money_wanted;

    for(i = 0; i < size_banknotes; i++) {
        banknotes_to_withdraw[i] = money_left / banknotes[i];
        money_left = money_left % banknotes[i];
    }

    printf("\n");
    printf("Banknotes you will receive: \n");
    for(i = 0; i < size_banknotes; i++) {
        printf("%d: %d\n", banknotes[i], banknotes_to_withdraw[i]);
    }
}

#include <stdio.h>
#include <stdlib.h>

int table[4];
int sum = 0;

int i;

size_t size_table = sizeof table / sizeof table[0];

int main()
{
    for(i = 0; i <= size_table; i++) {
        printf("Number %d: ", i);
        scanf("%d", &table[i]);

        if(table[i] % 2 == 0) {
            table[i] = 0;
        }
    }

    sum = table[0];
    for(i = 0; i <= size_table-1; i++) {
        sum = sum + table[i+1];
    }

    printf("\nSum = %d", sum);

    return 0;
}

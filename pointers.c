#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int values[5] = {0, 10, 20, 30, 40};
int size_value = sizeof(values) / sizeof(values[0]);

int *p;

int i;

int main() {

    p = values;

    display_array(values);

    printf("\n\n");

    for(i = 0; i < size_value; i++) {
        *(p + i) = i * 100;
    }

    printf("\n\n");

    display_array(values);

    return 0;
}

void display_array(int array) {
    int y;

    for(y = 0; y < size_value; y++) {
        printf("values[%d] = %d\n", y, *(p + y));
    }
}

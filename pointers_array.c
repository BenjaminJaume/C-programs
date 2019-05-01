#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};

int i;

int *ptr_value;

int value;

int *linear_search(int val) {
    int *parr, *parrend = arr + array_length(arr);

    for (parr = arr; parr < parrend; parr++) {
        if (*parr == val)
            return parr;
    }
    return NULL;
}

int array_length(char array[]) {
    int length = sizeof(array) / sizeof(array[0]);
    printf("%d", length);
    return length;
}

int main(void) {

    printf("Which value are you looking for ? ");
    scanf("%d", &value);

    if(value > 0 && value < 100) {
        ptr_value = linear_search(value);

        if(ptr_value == NULL) {
            printf("\nValue not found\n\n");
        }
        else {
            printf("\nValue found\n\n");
        }
    }
    else
        printf("Wrong number mate");

    return 0;
}

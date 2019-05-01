#include <stdio.h>
#include <stdlib.h>

int array1[10] = {2, 7, 4, 8, 1, 0, 3, 9, 6, 5};
int array2[5]  = {66, 22, 11, 99, 44};

int array1_length;
int array2_length;

int main() {

    array1_length = sizeof(array1) / sizeof(array1[0]);
    array2_length = sizeof(array2) / sizeof(array2[0]);

    display_array(array1, array1_length);

    insertion_sort(array1, array1_length);

    display_array(array1, array1_length);

    printf("\n\n");

    display_array(array2, array2_length);

    insertion_sort(array2, array2_length);

    display_array(array2, array2_length);

    return 0;
}

void display_array(int arr[], int arr_len) {
    printf("\n");

    for(int i = 0; i < arr_len; i++) {
        printf(" %d |", arr[i]);
    }

    printf("\n");
}

void shift_element(int arr[], unsigned int i) {
    int ivalue;
    /* guard against going outside arr */
    for(ivalue = *(arr + i); i && *(arr + (i-1)) > ivalue; i--) {
        *(arr + i) = *(arr + (i-1)); /* move element down */
    }
    *(arr + i) = ivalue; /* insert element */
}

/* iterate until out−of−order element found ; shift the element , and continue iterating */
void insertion_sort(int arr[], int arr_len) {
    unsigned int i;

    for (i = 1; i < arr_len; i++) {
        if(*(arr + i) < *(arr + (i-1))) {
            shift_element(arr, i);
        }
    }

}

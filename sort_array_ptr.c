#include <stdio.h>
#include <stdlib.h>

int height[5];
int *p_height[5];

int size_height;
int i;

int main()
{
    size_height = sizeof(height) / sizeof(height[0]);

    for(i = 0; i < size_height; i++) {
        printf("Value n%d ? ", i);
        scanf("%d", &height[i]);
    }

    printf("\n");

    display_array(height, size_height);

    printf("\n");

    for(i = 0; i < size_height; i++) {
        *(p_height + i) = height[i];
    }

    ptr_display_array(p_height, size_height);

    printf("\n");

    insertion_sort(p_height, size_height);

    display_array(height, size_height);
    printf("\n");
    ptr_display_array(p_height, size_height);

    printf("\n");



    return 0;
}

void display_array(int array[], int size) {
    for(int y = 0; y < size; y++) {
        printf("Value n%d = %d\n", y, array[y]);
    }
}

void ptr_display_array(int *array[], int size) {
    for(int y = 0; y < size; y++) {
        printf("*Value n%d = %d\n", y, *(array + y));
    }
}

void shift_element(int array[], unsigned int i) {
    int ivalue;

    for(ivalue = *(array + i); i && *(array + (i-1)) > ivalue; i--) {
        *(array + i) = *(array + (i-1));
    }
    *(array + i) = ivalue;
}

void insertion_sort(int *array[], int length) {
    unsigned int i;

    for (i = 1; i < length; i++) {
        if(*(array + i) < *(array + (i-1))) {
            shift_element(array, i);
        }
    }

}

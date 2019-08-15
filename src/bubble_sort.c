#include <stdio.h>
#include "utils/swap.h"

void bubble_sort (int array[], int length) {
    if (2 > length) return;

    for (int i = 0; i < length - 1; i++) {
        _Bool swapped = 0;

        for (int j = 0; j < (length - i - 1); j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swapped = 1;
            }
        }

        if (0 == swapped) return;
    }
}

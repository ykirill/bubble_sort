/* Utils for comparing two arrays */

int compare(const int arr_1[], int length_1, const int arr_2[], int length_2) {
    if (length_1 != length_2) {
        return 0;
    }

    for (int i = 0; i < length_1; i++) {
        if (arr_1[i] != arr_2[i]) {
            return 0;
        }
    }

    return 1;
}

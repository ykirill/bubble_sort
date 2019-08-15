#include <assert.h>
#include "bubble_sort.h"
#include "utils/compare.h"
#include "utils/swap.h"

void testSwap () {
    // Arrange
    int array_1[] = {0,1};
    int array_2[] = {1,0};
    // Act
    swap(&array_2[0], &array_2[1]);
    // Assert
    assert(compare(array_1, 2, array_2, 2));
}

void testCompareSuccess () {
    // Arrange
    int array_1[1] = {0};
    int array_2[1] = {0};
    // Act
    // Assert
    assert(compare(array_1, 1, array_2, 1));
}

void testCompareFailure () {
    // Arrange
    int array_1[1] = {0};
    int array_2[1] = {1};
    // Act
    // Assert
    assert(compare(array_1, 1, array_2, 1) == 0);
}

void testBubbleSortOnEmptyArray () {
    // Arrange
    int length = 0;
    int expected_array[length];
    int actual_array[length];
    // Act
    bubble_sort(actual_array, length);
    // Assert
    assert(compare(expected_array, length, actual_array, length));
}

void testBubbleSortOnSmallArray () {
    // Arrange
    int length = 1;
    int expected_array[] = {0};
    int actual_array[] = {0};
    // Act
    bubble_sort(actual_array, length);
    // Assert
    assert(compare(expected_array, length, actual_array, length));
}

void testBubbleSortOnArrayWithTwoElements () {
    // Arrange
    int length = 2;
    int expected_array[] = {0, 1};
    int actual_array[] = {1, 0};
    // Act
    bubble_sort(actual_array, length);
    // Assert
    assert(compare(expected_array, length, actual_array, length));
}

void testBubbleSortOnArrayWithManyElements () {
    // Arrange
    int length = 6;
    int expected_array[] = {0, 1, 2, 3, 4, 10};
    int actual_array[] = {1, 0, 10, 2, 4, 3};
    // Act
    bubble_sort(actual_array, length);
    // Assert
    assert(compare(expected_array, length, actual_array, length));
}

int main() {
    testSwap();
    testCompareSuccess();
    testCompareFailure();
    testBubbleSortOnEmptyArray();
    testBubbleSortOnSmallArray();
    testBubbleSortOnArrayWithTwoElements();
    testBubbleSortOnArrayWithManyElements();
    return 0;
}
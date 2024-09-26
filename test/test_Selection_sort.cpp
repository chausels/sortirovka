
#include <catch.h>
#include "Selection_sort.h"

TEST(SelectionSortTest, EmptyArray) {
    int arr[] = {};
    selectionSort(arr, 0);
    ASSERT_EQ(sizeof(arr) / sizeof(arr[0]), 0);
}

TEST(SelectionSortTest, SingleElement) {
    int arr[] = {3};
    selectionSort(arr, 1);
    ASSERT_EQ(arr[0], 3);
}

TEST(SelectionSortTest, AlreadySortedArray) {
    int arr[] = {1, 2, 3, 4, 5};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; ++i) {
        ASSERT_EQ(arr[i], i + 1);
    }
}

TEST(SelectionSortTest, ReverseSortedArray) {
    int arr[] = {5, 4, 3, 2, 1};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; ++i) {
        ASSERT_EQ(arr[i], i + 1);
    }
}

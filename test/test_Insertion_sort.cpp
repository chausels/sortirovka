#include <catch.hpp>
#include "Insertion_sort.h"

TEST(InsertionSortTest, EmptyArray) {
    int arr[] = {};
    insertionSort(arr, 0);
    ASSERT_EQ(sizeof(arr) / sizeof(arr[0]), 0);
}

TEST(InsertionSortTest, SingleElement) {
    int arr[] = {5};
    insertionSort(arr, 1);
    ASSERT_EQ(arr[0], 5);
}

TEST(InsertionSortTest, SortedArray) {
    int arr[] = {1, 2, 3, 4, 5};
    insertionSort(arr, 5);
    for (int i = 0; i < 5; ++i) {
        ASSERT_EQ(arr[i], i + 1);
    }
}

TEST(InsertionSortTest, ReverseArray) {
    int arr[] = {5, 4, 3, 2, 1};
    insertionSort(arr, 5);
    for (int i = 0; i < 5; ++i) {
        ASSERT_EQ(arr[i], i + 1);
    }
}

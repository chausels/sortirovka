#include <catch.hpp>
#include "Bubble_sort.h"

TEST(BubbleSortTest, EmptyArray) {
    int arr[] = {};
    bubbleSort(arr, 0);
    ASSERT_EQ(sizeof(arr) / sizeof(arr[0]), 0);
}

TEST(BubbleSortTest, SingleElement) {
    int arr[] = {1};
    bubbleSort(arr, 1);
    ASSERT_EQ(arr[0], 1);
}

TEST(BubbleSortTest, RandomOrderArray) {
    int arr[] = {3, 1, 2};
    bubbleSort(arr, 3);
    ASSERT_EQ(arr[0], 1);
    ASSERT_EQ(arr[1], 2);
    ASSERT_EQ(arr[2], 3);
}

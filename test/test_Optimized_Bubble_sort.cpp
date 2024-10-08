#include <catch.cpp>
#include "Optimized_Bubble_sort.h"

TEST(OptimizedBubbleSortTest, EmptyArray) {
    int arr[] = {};
    optimized_bubble_sort(arr, 0);
    ASSERT_EQ(arr[0], 0); // No elements to compare
}

TEST(OptimizedBubbleSortTest, SingleElement) {
    int arr[] = {10};
    optimized_bubble_sort(arr, 1);
    ASSERT_EQ(arr[0], 10);
}

TEST(OptimizedBubbleSortTest, SortedArray) {
    int arr[] = {1, 2, 3, 4, 5};
    optimized_bubble_sort(arr, 5);
    ASSERT_EQ(arr[0], 1);
    ASSERT_EQ(arr[4], 5);
}

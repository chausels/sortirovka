#include <catch.hpp>
#include "Exchange_sort.h"

TEST(ExchangeSortTest, EmptyArray) {
    int arr[] = {};
    exchangeSort(arr, 0);
    ASSERT_EQ(sizeof(arr) / sizeof(arr[0]), 0);
}

TEST(ExchangeSortTest, SingleElement) {
    int arr[] = {5};
    exchangeSort(arr, 1);
    ASSERT_EQ(arr[0], 5);
}

TEST(ExchangeSortTest, UnsortedArray) {
    int arr[] = {4, 2, 3, 1, 5};
    exchangeSort(arr, 5);
    for (int i = 0; i < 5; ++i) {
        ASSERT_EQ(arr[i], i + 1);
    }
}

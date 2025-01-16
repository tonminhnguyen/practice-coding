//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>

int binarySearch(int arr[], int size, int x) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, size, x);
    if (result == -1)
        std::cout << "Element is not present in array";
    else
        std::cout << "Element is present at index " << result;
    return 0;
}

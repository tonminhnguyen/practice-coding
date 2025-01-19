//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>

// Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        // Swap the found minimum element with the first element
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

// Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Insertion Sort
// Iterate from arr[1] to arr[n] on the array.
// Compare the current element (key) with its previous element.
// If the key element is smaller than the previous element, compare it with earlier elements. Move the larger elements one position forward to create space for the key to be swapped.
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// Quick Sort Helper function
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; ++j) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

// Quick Sort
// If the given array has one or fewer elements, it is considered sorted, and no further actions are needed.
// If the array has more than one element, it is divided into two parts:
// The left part contains all the elements less than a chosen pivot value (X).
// The right part contains all the elements greater than or equal to the pivot value (X).
// Then, the process is recursively applied to both the left and right subarrays until all subarrays contain one or fewer elements, which means the array is sorted.
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Merge two subarrays
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        ++i;
        ++k;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        ++j;
        ++k;
    }

    delete[] L;
    delete[] R;
}

// Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    std::cout << "Original array for Bubble Sort: ";
    printArray(arr1, size1);
    bubbleSort(arr1, size1);
    std::cout << "Sorted array using Bubble Sort: ";
    printArray(arr1, size1);

    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "\nOriginal array for Insertion Sort: ";
    printArray(arr2, size2);
    insertionSort(arr2, size2);
    std::cout << "Sorted array using Insertion Sort: ";
    printArray(arr2, size2);

    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "\nOriginal array for Quick Sort: ";
    printArray(arr3, size3);
    quickSort(arr3, 0, size3 - 1);
    std::cout << "Sorted array using Quick Sort: ";
    printArray(arr3, size3);

    int arr4[] = {64, 34, 25, 12, 22, 11, 90};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);

    // If the array has one or no elements, it's already sorted. Do nothing.
    // If the array has more than one element:
    // Split the array into two equal parts.
    // Sort each of the two parts.
    // Merge the two sorted parts back into a single sorted array with the original size.
    // space O(n) time O(nlogN)
    std::cout << "\nOriginal array for Merge Sort: ";
    printArray(arr4, size4);
    mergeSort(arr4, 0, size4 - 1);
    std::cout << "Sorted array using Merge Sort: ";
    printArray(arr4, size4);

    return 0;
}

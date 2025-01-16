//
// Created by minh.nguyen on 1/10/2025.
//
#include <iostream>

void getInputSize(int &size) {
    while (true) {
        std::cout << "Enter array size: ";
        std::cin >> size;

        if (std::cin.fail() || size <= 0) {
            std::cout << "Invalid input. Please enter a positive integer." << std::endl;
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        } else {
            break;
        }
    }
}

void getInput(int arr[], const int size) {
    std::cout << "Enter array elements: " << std::endl;
    for (int i = 0; i < size; i++) {
        while (true) {
            std::cin >> arr[i];
            if (std::cin.fail()) {
                std::cout << "Invalid input. Please enter a positive integer." << std::endl;
                std::cin.clear();
                std::cin.ignore(32767, '\n');
            } else {
                break;
            }
        }
    }
}

void reverseArray(int arr[], const int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        std::swap(arr[left++], arr[right--]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int size;
    getInputSize(size);
    auto arr = new int[size];
    getInput(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);
    delete[] arr;
    return 0;
}

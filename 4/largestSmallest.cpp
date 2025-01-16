//
// Created by minh.nguyen on 1/13/2025.
//
#include <iostream>

void getInputSize(int &size) {
    while (true) {
        std::cout << "array size: " << std::endl;
        std::cin >> size;
        if (std::cin.fail() || size <= 0) {
            std::cout << "invalid input, please input again" << std::endl;
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        } else {
            break;
        }
    }
}

void getInput(int arr[], const int size) {
    std::cout << "enter elements " << std::endl;
    for (int i = 0; i < size; i++) {
        while (true) {
            std::cin >> arr[i];
            if (std::cin.fail()) {
                std::cout << "invalid input, please input again" << std::endl;
                std::cin.clear();
                std::cin.ignore(32767, '\n');
            } else {
                break;
            }
        }
    }
}

std::pair<int, int> findMinMax(int arr[], int size) {
    int min = arr[0], max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }
    return {min, max};
}

int main() {
    int size;
    getInputSize(size);
    auto arr = new int[size];
    getInput(arr, size);
    std::pair<int, int> result = findMinMax(arr, size);
    std::cout << "Min value " << result.first << " Max value " << result.second << std::endl;
    delete[] arr;
}

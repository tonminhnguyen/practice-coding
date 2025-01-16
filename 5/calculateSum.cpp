//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>

void getInputSize(int& size) {
    while (true) {
        std::cout << "Enter array size: ";
        std::cin >> size;

        if (std::cin.fail() || size <= 0) {
            std::cout << "Invalid input. Please enter again." << std::endl;
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        } else {
            break;
        }
    }
}

void getInput(int arr[], int size) {
    std::cout << "Enter array elements: " << std::endl;
    for (int i = 0; i < size; i++) {
        while (true) {
            std::cin >> arr[i];
            if (std::cin.fail()) {
                std::cout << "Invalid input. Please enter an integer." << std::endl;
                std::cin.clear();
                std::cin.ignore(32767, '\n');
            } else {
                break;
            }
        }
    }
}

int calculateSum(int arr[], const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    getInputSize(size);
    int* array = new int[size];
    getInput(array, size);
    int sum = calculateSum(array, size);
    std::cout << "Sum is: " << sum << std::endl;
    delete[] array;
    return 0;
}

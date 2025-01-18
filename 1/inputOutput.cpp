#include <iostream>

void getTwoInputs(int &a, int &b) {
    while (true) {
        std::cout << "input a and b here" << std::endl;
        std::cin >> a >> b;
        if (std::cin.fail()) {
            std::cout << "Invalid input" << std::endl;
            std::cin.clear();
            std::cin.ignore();
        } else {
            std::cin.ignore();
            break;
        }
    }
}

void printSum(int a, int b) {
    std::cout << "a + b = " << a + b << std::endl;
}

int main() {
    int a, b;
    getTwoInputs(a, b);
    printSum(a, b);
    return 0;
}

//
// Created by minh.nguyen on 1/16/2025.
//

#include <iostream>
#include <stdexcept>

float Division(int num, int den)
{
    if (den == 0) {
        throw std::runtime_error("Math error: Attempted to divide by Zero\n");
    }
    return (num / den);
}

int main()
{
    float numerator, denominator, result;

    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    try {
        result = Division(numerator, denominator);
        std::cout << "The result is " << result << std::endl;
    }
    catch (std::runtime_error& e) {
        std::cout << "Exception occurred" << std::endl << e.what();
    }
}

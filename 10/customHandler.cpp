//
// Created by minh.nguyen on 1/16/2025.
//

#include <iostream>
#include <stdexcept>

using namespace std;

class DivideByZeroException : public runtime_error {
public:
    DivideByZeroException() : runtime_error("Math error: Attempted to divide by Zero\n") {}
};

class InvalidInputException : public runtime_error {
public:
    InvalidInputException() : runtime_error("Invalid input: Only numbers are allowed!\n") {}
};


float Division(float num, float den)
{
    if (den == 0)
        throw DivideByZeroException();
    return (num / den);
}

bool isNumber(const string& str) {
    for (char c : str) {
        if (!isdigit(c) && c != '.') {
            return false;  // Nếu có ký tự không phải là số hoặc dấu chấm thì không phải số
        }
    }
    return true;
}


int main()
{
    float numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        result = Division(numerator, denominator);
        cout << "The result is " << result << endl;
    }
    catch (Exception& e) {
        cout << "Exception occurred" << endl << e.what();
    }
}

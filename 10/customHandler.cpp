//
// Created by minh.nguyen on 1/16/2025.
//

#include <iostream>
#include <stdexcept>

using namespace std;

class Exception : public runtime_error {
public:
    Exception() : runtime_error("Math error: Attempted to divide by Zero\n") {}
};

float Division(float num, float den)
{
    if (den == 0)
        throw Exception();
    return (num / den);
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

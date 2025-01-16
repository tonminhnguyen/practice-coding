//
// Created by minh.nguyen on 1/16/2025.
//

#include <iostream>

int gcd(int a, int b) {
    if (a == 0) return b;
    // continue calling with the reminder of "b" divided by "a" and the value of "a"
    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 12, b = 39;
    std::cout << gcd(a, b) << std::endl;
    std::cout << lcm(a, b) << std::endl;
}

//
// Created by minh.nguyen on 1/13/2025.
//
#include <iostream>
#include <cctype>

bool isPalindrome(const std::string &str) {
    int right = str.length() - 1;
    int left = 0;

    while (left < right) {
        while (left < right && !isalnum(str[left])) {
            // skip not alphabet and number
            left++;
        }

        while (right > left && !isalnum(str[right])) {
            // skip not alphabet and number
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }
    return true;
}

int main() {
    std::cout << std::boolalpha;
    std::cout << isPalindrome("!rad_ar") << std::endl;
    return 0;
}
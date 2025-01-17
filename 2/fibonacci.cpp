#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int prev1 = 1, prev2 = 0;
    int curr = 0;
    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

int main() {
    int n = 5;
    std::cout << fibonacci(n) << std::endl;
    return 0;
}

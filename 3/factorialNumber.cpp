//
// Created by minh.nguyen on 1/10/2025.
//

#include <iostream>

unsigned int factorial(unsigned int n) {
       if (n == 0 || n == 1) {
         return 1;
       }
       return n * factorial(n - 1);
};

void getInput(unsigned int &n) {
  while (true) {
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    if (std::cin.fail()) {
      std::cout << "Invalid input." << std::endl;
      std::cin.clear();
      std::cin.ignore(32767, '\n');
    }
    else if (n < 0) {
      std::cout << "Negative input." << std::endl;
      std::cin.clear();
      std::cin.ignore(32767, '\n');
    }
    else {
      std::cin.ignore(32767, '\n');
      break;
  }
}};

int main() {
   unsigned int number;
  getInput(number);
  std::cout << factorial(number) << std::endl;
  return 0;
}

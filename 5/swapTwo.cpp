//
// Created by minh.nguyen on 1/16/2025.
//

#include <iostream>

void swapTwoNumber(int *num1, int *num2){
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;

  // store value 1 in temp -> then assign value of num2 to num1 -> then assign value of temp (original num1 to num2)
};

int main() {
  int a = 10;
  int b = 20;
  swapTwoNumber(&a, &b);
  std::cout << "number 1" << a << " number 2 " << b << std::endl;
}
//
// Created by minh.nguyen on 1/10/2025.
//

#include <iostream>

void inputTwoNumbers(int &num1, int &num2){
    while(true){
    std::cout << "please enter 2 numbers" << std::endl;
    std::cin >> num1 >> num2;
    if (std::cin.fail()){
      std::cout << "invalid inputs " <<  std::endl;
      std::cin.clear();
      std::cin.ignore();
      }
    else{
        std::cin.ignore(32767, '\n');
        break;
      }
    }
}

void swap(int &num1, int &num2) noexcept {
   num1= num1 + num2;
   num2  = num1 - num2;
   num1 = num1 - num2;
}

int main(){
  int num1, num2;
  inputTwoNumbers(num1, num2);
  // before swapping
  std::cout << num1 << num2 << std::endl;
  swap(num1, num2);
  // after swapping
  std::cout << num1 << num2 << std::endl;
}
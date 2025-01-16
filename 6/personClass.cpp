//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>

class Person {
public:
    std::string name;
    int age{};

    void getInformation() {
        std::cout << "enter name: ";
        std::cin >> name;
        std::cout << "enter age: ";
        std::cin >> age;
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age;
    }
};

int main() {
    Person s1;
    s1.getInformation();
    s1.display();
    return 0;
}

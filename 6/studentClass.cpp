//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age{};

    void getInformation() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
public:
    std::string studentID;
    int grade{};

    void getStudentInformation() {
        getInformation();
        std::cout << "Enter student ID: ";
        std::cin >> studentID;
        std::cout << "Enter grade: ";
        std::cin >> grade;
    }

    void displayStudentInformation() {
        display();
        std::cout << "Student ID: " << studentID << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main() {
    Student student;
    student.getStudentInformation();
    std::cout << "\nStudent's Details:\n";
    student.displayStudentInformation();

    return 0;
}

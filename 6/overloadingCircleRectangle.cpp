//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>
#include <cmath>

class Shape {
public:
    double calculateArea(double radius) {
        return M_PI * radius * radius;
    }

    double calculateArea(double length, double width) {
        return length * width;
    }
};

int main() {
    Shape shape;

    double circleRadius = 5.0;
    double circleArea = shape.calculateArea(circleRadius);
    std::cout << "area of the circle with radius " << circleRadius << " is " << circleArea << std::endl;

    double rectangleLength = 10.0;
    double rectangleWidth = 4.0;
    double rectangleArea = shape.calculateArea(rectangleLength, rectangleWidth);
    std::cout << "area of the rectangle with length " << rectangleLength
             << " and width " << rectangleWidth << " is " << rectangleArea << std::endl;

    return 0;
}

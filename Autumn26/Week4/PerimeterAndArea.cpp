#include <iostream>

void rectangle(double length, double width, double& area, double& perimeter) {

    area = length * width;
    perimeter = 2 * length + 2 * width;

}

int main() {

    double side1, side2, t1, t2;

    std::cout << "Enter the length of the rectangle: " << std::endl;
    std::cin >> side1;
    std::cout << "Enter the width of the rectangle: " << std::endl;
    std::cin >> side2;

    rectangle(side1, side2, t1, t2);

    std::cout << "The area is: " << t1 << std::endl;
    std::cout << "The perimeter is: " << t2 << std::endl; 

}
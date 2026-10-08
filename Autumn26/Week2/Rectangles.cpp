#include <iostream>

int main() {

    double width, height, area, perimeter;

    std::cout << "Please enter the width: \n >> ";
    std::cin >> width;
    std::cout << std::endl;

    std::cout << "Please enter the height: \n >> ";
    std::cin >> height;
    std::cout << std::endl;

    area = width * height;
    perimeter = 2 * width + 2 * height;
    std::cout << "The area is: " << area << std::endl;
    std::cout << "The perimeter is: " << perimeter << std::endl;

}
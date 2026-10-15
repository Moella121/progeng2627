#include <iostream>

int main() {

    int year;

    std::cout << "Please enter a year:\n>>  ";
    std::cin >> year;
    std::cout << std::endl;
    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                std::cout << "This is a leap year" << std::endl;
            }
            else {
                std::cout << "This is not a leap year" << std::endl;
            }
        }
        else {
            std::cout << "This is a leap year" << std::endl;
        }
    }
    else {
        std::cout << "This is not a leap year" << std::endl;
    }
    
}
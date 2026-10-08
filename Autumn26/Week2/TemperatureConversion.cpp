#include <iostream>

int main() {

    double celsius, fahrenheit;

    std::cout << "Please enter the temperature in Celsius: \n >> ";
    std::cin >> celsius;
    std::cout << std::endl;

    fahrenheit = celsius * (9 / 5.0) + 32;
    std::cout << "The temperature in fahrenheit is: " << fahrenheit <<std::endl;
}
#include <iostream>

int main() {
    
    double weight, height, bmi;

    std::cout << "Please enter your weight: \n >> ";
    std::cin >> weight;
    std::cout << std::endl;

    std::cout << "Please enter your height: \n >> ";
    std::cin >> height;
    std::cout << std::endl;

    bmi = weight / (height * height);
    std::cout << "Your BMI is: " << bmi << std::endl;

}
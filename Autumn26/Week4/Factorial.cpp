#include <iostream>

int factorial(int in) {
    int fact=1;
    for (int i=0;i<in;i++) {
        fact = fact * (in - i);
    }
    return fact;

}



int main() {

    int n, result;
    std::cout << "Enter the number: \n>> ";
    std::cin >> n;
    std::cout << std::endl;

    result = factorial(n);
    std::cout << result << std::endl;

}
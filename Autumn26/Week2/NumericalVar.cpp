#include <iostream>

int main() {

    double n1, n2, sum;

    std::cout << "Please enter your first number: \n >> ";
    std::cin >> n1;
    std::cout << std::endl;

    std::cout << "Please enter your second number: \n  >> ";
    std::cin >> n2;
    std::cout << std::endl;

    sum = n1 * n2;

    std::cout << n1 << " * " << n2 << " = " << sum << std::endl;


    // double a, b, c;
    // a = 1;
    // b = 2;
    // c = a + b;

    // std::cout << c << std::endl;

    // a = 2;

    // std::cout << c << std::endl;
    // Expecting 4 to be printed, in reality 3 was printed

    // c = a + b;

    // std::cout << c << std::endl;
    // Expecting 4 to be printed

    // std::cout << 5 / 2.0 << std::endl;
}

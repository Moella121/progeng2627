#include <iostream>

int main() {

    // double n1, n2, sum;

    // std::cout << "Please enter your first number: \n >> ";
    // std::cin >> n1;
    // std::cout << std::endl;

    // std::cout << "Please enter your second number: \n  >> ";
    // std::cin >> n2;
    // std::cout << std::endl;

    // sum = n1 * n2;

    // std::cout << n1 << " * " << n2 << " = " << sum << std::endl;


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


    int n, rem;

    std::cout << "Please enter a number \n >> ";
    std::cin >> n;
    std::cout << std::endl;

    rem = n % 2;

    std::cout << "in the following line 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;

    // std::cout << 5 / 2.0 << std::endl;
}
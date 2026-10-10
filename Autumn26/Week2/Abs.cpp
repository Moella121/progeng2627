#include <iostream>

int main() {

    int n, abs;

    std::cout << "Enter your number: \n >> ";
    std::cin >> n;
    std::cout << std::endl;

    if (n < 0) {
        abs = -n;
    }
    else {
        abs = n;
    }

    std::cout << "The absolute value is: " << abs << std::endl;

}
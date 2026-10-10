#include <iostream>

int main() {
 
 int n, rem_2, rem_3;

    std::cout << "Please enter a number \n >> ";
    std::cin >> n;
    std::cout << std::endl;

    rem_2 = n % 2;
    rem_3 = n % 3;

    // std::cout << "in the following line 0 means even and 1 means odd" << std::endl;
    // std::cout << rem << std::endl;

    if (rem_2 == 0) {
        std::cout << "This number is even!" << std::endl;
    }
    else {
        std::cout << "This number is odd!" << std::endl;
    }


    if (rem_3 == 0) {
        std::cout << "This number is a multiple of 3!" << std::endl;
    }
    else {
        std::cout << "This number is not a multiple of 3!" << std::endl;
    }
    
}
#include <iostream>
#include <cmath>

int smallest_factor(int n) {

    for(int cf = 2; cf <= sqrt(n); cf++){

        if( (n % cf) == 0){ 
            return cf;
        }

    }

    return 0;

}

int main() {

    //int in;
    //std::cout << "Enter the number" << std::endl;
    //std::cin >> in;

    //if (smallest_factor(in) == 0) {
    //   std::cout << "The number is prime." <<std::endl;
    //}
    //else {
    //    std::cout << "The smallest factor is: " << smallest_factor(in) << std::endl;
    //}

    int lower_bound, upper_bound;
    bool valid = false;
    while (not valid) {

        std::cout << "Enter the lower bound: \n >> ";
        std::cin >> lower_bound;
        std::cout << "Enter the upper bound: \n >> ";
        std::cin >> upper_bound;
        std::cout << std::endl;

        if ((upper_bound > lower_bound) && (lower_bound > 1)) {
            valid = true;
        }
        else {
            std::cout << "Upper bound must be greater than lower bound, and neither should be 1 or less." << std::endl;
        }

    }

    for (int i=lower_bound;i<=upper_bound;i++) {

        if (smallest_factor(i) == 0) {
            std::cout << i << std::endl;
        }

    }

}
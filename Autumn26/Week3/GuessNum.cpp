//AIM: use Binary search to figure out a number within any range given

#include <iostream> 
#include <string>

int main() {

    int upper_bound, lower_bound, n, range;
    bool found = false; 
    std::string highLow; 

    bool bound_valid = false;
    while (not bound_valid) {
        std::cout << "Enter the lower bound: \n >> ";
        std::cin >> lower_bound;
        std::cout << "Enter the upper bound: \n >> ";
        std::cin >> upper_bound;
        std::cout << std::endl;

        if (upper_bound > lower_bound) {
            bound_valid = true;
        }
        else {
            std::cout << "Upper bound must be greater than lower bound." << std::endl;
        }
    }

    while (not found) {

        range = upper_bound - lower_bound;
        n = range / 2 + lower_bound;

        if ((range == 2) || (range == 1)) {
            found = true;
        }
        else {
            bool input_valid = false;
            while (not input_valid) {
                input_valid = true;
                std::cout << "Is your number " << n << " or is it higher or lower? (y/h/l)" << std::endl;
                std::cin >> highLow;

                if ((highLow == "y") || (highLow == "Y")) {
                    found = true;
                }
                else if ((highLow == "h") || (highLow == "H")) {
                    lower_bound = n;
                }
                else if ((highLow == "l") || (highLow == "L")) {
                    upper_bound = n;
                }
                else {
                    std::cout << "Invalid input" << std::endl;
                    input_valid = false;
                }

            }
        }
    }
    std::cout << "Your number is: " << n << std::endl;
}
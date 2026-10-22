#include <iostream>

int main() {

    int counter=0, n, max;
    std::cin >> n;
    max = n;
    
    while (n != 1) {

        if (n%2 == 0) {
            n = n/2;
        }
        else {
            n = 3 * n + 1;
        }
        
        counter++;
        if (n > max) {
            max = n;
        }

        std::cout << n << std::endl;

    }

    std::cout << "The conjecture was reached in " << counter << " steps." << std::endl;
    std::cout << "The maximum number reached was " << max << std::endl;

}
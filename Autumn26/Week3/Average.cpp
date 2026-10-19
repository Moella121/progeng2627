#include <iostream>

int main() {

    double i=0, n, sum=0;
    bool valid = true;

    while (valid) {
        std::cin >> n;
        sum = sum + n;
        i = i + 1;
        if (n == 0) {
            valid = false;
        }
        std::cout << "The average so far is " << sum / i << std::endl;
    }

    std::cout << "Your average is: " << sum / i << std::endl;
}

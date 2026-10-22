#include <iostream>

int main() {

    int n, max, min;
    bool cont = true;

    std::cin >> n;
    max = n;
    min = n;

    while (cont) {
        std::cout << "Your maximum is: " << max << std::endl;
        std::cout << "Your minimum is: " << min << std::endl;

        std::cin >> n;

        if (n==0) {
            cont = false;
        }
        else if (n>max) {
            max = n;
        }
        else if (n<min) {
            min = n;
        }

    }

}
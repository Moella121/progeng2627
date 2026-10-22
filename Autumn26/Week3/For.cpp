#include <iostream>

int main() {
    
    //int n, x, x_2=1;
    //std::cin >> x >> n;

    //for(int i = 0; i < n; i++;) {
    //    std::cout << i << std::endl;
    //    x_2 = x_2 * x;
    //    std::cout << x_2 << std::endl;
    //}

    //std::cout << x_2 << std::endl;


    int n, nFact=1;
    std::cin >> n;

    for (; n > 0; n--) {
        nFact = nFact * n;
        std::cout << nFact << " " << n << std::endl;
    }
    std::cout << nFact << std::endl;
}
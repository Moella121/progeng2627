#include <iostream>

void mySwap(double& num1,double& num2) {
    double temp;

    temp = num2;
    num2 = num1;
    num1 = temp;
} 

void sort(double& n1, double& n2, double& n3) {

    bool sorted = false;

    while (not sorted) {

        if ((n1 < n2) && (n1 < n3) && (n2 < n3)){
            sorted = true;
        }
        else {
            if (n1 > n2) {
                mySwap(n1,n2);
            }
            if (n2 > n3) {
                mySwap(n2,n3);
            }
        }
    }
}

int main() {

    double first, second, third;

    std::cout << "Enter the first number: " << std::endl;
    std::cin >> first;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> second;
    std::cout << "Enter the third number: " << std::endl;
    std::cin >> third;

    sort(first,second,third);
    std::cout << "Sorted: " << first << " " << second << " " << third << std::endl;

}


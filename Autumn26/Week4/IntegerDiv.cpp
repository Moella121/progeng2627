#include <iostream> 

void int_div(int a,int b,int& result, int& remainder) {

    result = a / b;
    remainder = a % b;

}

int main() {

    int a, b, answer, remainder;

    std::cout << "Enter the first number: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> b;

    int_div(a,b,answer,remainder);

    std::cout << "Integer division: " << answer << std::endl;
    std::cout << "Integer remainder: " << remainder << std::endl;


}
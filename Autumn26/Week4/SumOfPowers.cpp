#include <iostream>
#include <iomanip>
#include <cmath>

double pow(double x, double n) {
    double result=1.0;

    if (n < 0) {
        x = 1./x;
        n = -n;
    }
    else if(n==0) {
        return 1;
    }

    for (int i = 0;i<n;i++) {
        result = result * x;     
    }
    
    return result;

}

double sumOfPow(double base, double power) {
    double sum=0;

    if (power >0) {
        for(int i=1;i<power+1;i++) {

            sum = sum + pow(base, i);
        }
    }
    else if (power < 0) {
        for(int i=-1;i>power-1;i--) {

            sum = sum + pow(base, i);
        }
    }
    else if (power == 0) {
        sum = pow(base,0);
    }
    return sum;
}

int main() {

    double base, power, result;
    std::cout << "Enter the base: \n>> ";
    std::cin >> base;
    std::cout << std::endl;

    std::cout << "Enter the power: \n>> ";
    std::cin >> power;
    std::cout << std::endl;
    
    result = sumOfPow(base, power);
    
    if (power < 0){
    std::cout << std::fixed << std::setprecision(10);
    }
    std::cout << result << std::endl;


}
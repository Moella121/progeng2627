#include <iostream>

int main() {

    double amount_gbp, exchange_rate, amount_euro;

    std::cout << "Please enter the amount in pounds: \n >> ";
    std::cin >> amount_gbp;
    std::cout << std::endl;

    std::cout << "Please enter the exchange rate to Euros: \n >> ";
    std::cin >> exchange_rate;
    std::cout << std::endl;

    amount_euro = amount_gbp * exchange_rate;
    std::cout << "The amount in Euros is: " << amount_euro << std::endl;
    
}
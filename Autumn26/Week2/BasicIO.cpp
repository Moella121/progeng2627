#include <iostream>
#include <string>

int main() {
    //   std::cout << "Hello Everyone!!!" << std::endl;
    // std::cout << " " << std::endl;
    // std::cout << "Goodbye!!!" << std::endl;

    std::string user_name;
    std::string user_surname;

    std::cout << "What is your name? \n >> ";
    std::cin >> user_name;

    std::cout << "What is your surname? \n >> ";
    std::cin >> user_surname;

    std::cout << "Hello, " << user_name << " " << user_surname << "!!!!" << std::endl;

}
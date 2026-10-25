#include <iostream>
#include <string>

void swap(std::string& passage1, std::string& passage2) {
    
    std::string temp;

    temp = passage1;
    passage1 = passage2;
    passage2 = temp;
}

int main() {

    std::string text1, text2;
    std::cout << "Enter the first text: " << std::endl;
    std::cin >> text1;
    std::cout << "Enter the second text: " << std::endl;
    std::cin >> text2;

    swap(text1,text2);
    
    std::cout << "The first text became: " << text1 << std::endl;
    std::cout << "The second text became: " << text2 << std::endl;

}
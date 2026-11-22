#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main(int argc, char* argfile[]) {

    std::string temp;
    std::ifstream text;
    text.open(argfile[1]);
    if (!text.is_open()) {
        std::cout << "File cannot be opened" << std::endl;
        return EXIT_FAILURE;
    }

    while (text >> temp) {
        std::cout << temp << "\t" << std::endl;
    }

}
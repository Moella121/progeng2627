#include <iostream>
#include <string>

int main() {
    bool valid = true;
    std::string end;

    std::cin >> end;

    while (valid) {
        std::cout << "You typed: " << end << std::endl;
        std::cin >> end;
        if ((end == "STOP") || (end == "Stop") || (end == "stop")) {
            valid = false;
        }
    }

}

#include <iostream>
#include <string>

int main() {

    double temp_in, temp_out;
    std::string unit_in, unit_out;
    bool valid = true;

    std::cout << "Please enter the temperature and unit: \n >> ";
    std::cin >> temp_in >> unit_in;
    std::cout << std::endl;

    if ((unit_in == "C") || (unit_in == "c")) {
        unit_out = "F";
        temp_out = temp_in * (9 / 5.0) + 32;
    }
    else if ((unit_in == "F") || (unit_in == "f")) {
        unit_out = "C";
        temp_out = (temp_in - 32) * (5 / 9.0);
    }
    else {
        valid = false;
    }

    
    if (valid) {
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else {
        std::cout << "Unrecognised unit" << std::endl;
    }
}
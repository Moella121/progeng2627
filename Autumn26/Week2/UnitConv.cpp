#include <iostream>
#include <string>

int main() {

    double length_in, length_out;
    std::string unit_in, unit_out;
    bool valid = true;

    const double mile_to_km = 1.609;

    std::cin >> length_in >> unit_in;

    if (unit_in == "km") {
        unit_out = "mile";
        length_out = length_in / 1.609;
    }
    else if ((unit_in == "mile") || (unit_in == "miles")) {
        unit_out = "km";
        length_out = length_in * 1.609;
    }
    else {
        valid = false;
    }

    if (valid) {
    std::cout << length_out << " " << unit_out << std::endl;
    }
    else {
        std::cout << "Unrecognised unit" << std::endl;
    }


}
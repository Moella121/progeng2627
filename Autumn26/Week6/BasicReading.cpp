#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int main() {

    std::string fileName, format=".txt";
    std::cout << "Enter the file name: " << std::endl;
    std::cin >> fileName;
    if ((size(fileName) < 4) || (fileName.substr(size(fileName)-4) != format)) {        // Learnt about function substr through https://algocademy.com/link/?lang=cpp&problem=string-slicing&solution=1
        fileName = fileName + format;                                                       // Concatenation known from previous pyhton knowledge
    }

    std::ifstream in;
    in.open(fileName);

    if (!in.is_open()) {
        std::cout << "File cannot be opened, does it exist?" << std::endl;
        return EXIT_FAILURE;
    }

    std::string temp;
    std::vector<std::string> v, v_reversed;

    while (in >> temp) {
        v.push_back(temp);
    }

    for (int i=1;i<=size(v);i++) {
        v_reversed.push_back(v[size(v)-i]);
    }

    in.close();

    std::string fileoutName;
    std::cout << "Enter the file output name: " << std::endl;
    std::cin >> fileoutName;
    if ((size(fileoutName) < 4) || (fileoutName.substr(size(fileoutName)-4) != format)) {        // Learnt about function substr through https://algocademy.com/link/?lang=cpp&problem=string-slicing&solution=1
        fileoutName = fileoutName + format;                                                       // Concatenation known from previous pyhton knowledge
    }

    std::ofstream out;
    out.open(fileoutName);

    if (!out.is_open()) {
        std::cout << "File could not be found, does it exist?" << std::endl; 
        return EXIT_FAILURE;
    }

    for (int i=0;i<size(v_reversed);i++) {
        out << v_reversed[i] << "\t";
    }

    out.close();

    //int sum=0;
    //while (test >> temp) {
        
    //    int sum=0;  
    //    sum = sum + temp;

    //}
      
    //test.close();
    //std::cout << "The sum of numbers in the file is: " << sum << std::endl; 

}
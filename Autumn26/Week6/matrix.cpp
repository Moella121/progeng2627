#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>

std::vector<double> line_to_vect(std::string line) {
    std::stringstream sline(line);
    std::string temp;
    std::vector<double> out;

    while (sline >> temp) {
        out.push_back(std::stod(temp));
    }

    return out;
}

std::vector<std::vector<double>>  read_file_matrix(std::string file_name) {

    std::string line;
    std::vector<std::vector<double>> out;
    std::ifstream file_in;

    file_in.open(file_name);
    if (!file_in.is_open()) {
        std::cout << "File cannot be opened " << file_name << std::endl;     
        std::exit(EXIT_FAILURE);
    }
    
    while (std::getline(file_in, line)) {
        out.push_back(line_to_vect(line));
    }
    return out;
}

std::vector<double> column_to_vect(const std::vector<std::vector<double>>& m, int cindex) {
    std::vector<double> out;
    for (int i=0;i<size(m);i++) {
        out.push_back(m[i][cindex]);
    }
    return out;
}

int dot(const std::vector<double>& v1, const std::vector<double>& v2) {
    std::vector<double> out;
    int product=0;
    for (int i=0;i<size(v1);i++) {
        product = product + (v1[i] * v2[i]);
    }
    return product;
}

std::vector<std::vector<double>> matrix_mult(
    const std::vector<std::vector<double>>& m1,
    const std::vector<std::vector<double>>& m2
) {
    std::vector<std::vector<double>> out;

    for (int r=0;r<m1.size();r++) {
        std::vector<double> row = m1[r], row_out={};
        for(int c=0;c<m2[r].size();c++) {
            row_out.push_back(dot(row,column_to_vect(m2,c)));
        }
        out.push_back(row_out);
    }
    return out;
}

std::string matrix_to_string(const std::vector<std::vector<double>>& m) {
    std::stringstream out;
    out << std::fixed << std::setprecision(2);

    for (int r=0;r<m.size();r++) {
        for(int c=0;c<m[r].size();c++) {
            out << m[r][c] << "\t";
        }
        out << "\n";
    }

    return out.str();
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Must be three arguments" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_file_matrix(argv[1]);
    std::vector<std::vector<double>> m2 = read_file_matrix(argv[2]);
    std::vector<std::vector<double>> m3 = matrix_mult(m1,m2);

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "*" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;
}


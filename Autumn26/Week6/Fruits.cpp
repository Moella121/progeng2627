#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void fruit_union(const std::vector<std::string>& v1, const std::vector<std::string>& v2, std::vector<std::string>& vout) {
    std::vector<int> dup_index = {};
    bool index_duplicate=false;

    for (int i=0;i<size(v1);i++) {
        for (int j=0;j<size(v2);j++) {
            if (v1[i]==v2[j]) {
                dup_index.push_back(j);
            }   
        }
    }
    
    for (int i=0;i<size(v1);i++) {
        vout.push_back(v1[i]);
    }

    for (int i=0;i<size(v2);i++) {
        index_duplicate = false;
        for (int j=0;j<size(dup_index);j++) {
            if(i==dup_index[j]) {
                index_duplicate = true;
            }
        }
        if (not index_duplicate) {
                vout.push_back(v2[i]);
        }
    }
}

void fruit_intersection(const std::vector<std::string>& v1, const std::vector<std::string>& v2, std::vector<std::string>& vout) {

    for (int i=0;i<size(v1);i++) {
        for (int j=0;j<size(v2);j++) {
            if (v1[i]==v2[j]) {
                vout.push_back(v1[i]);
            }
        }

    }

 }           
        
        

int main() {

    std::ifstream warehouse1,warehouse2;
    std::ofstream intersect, unite;
    std::vector<std::string>  fruit1, fruit2, fintersection, funion;
    std::string temp;



    warehouse1.open("Warehouse1.txt");
    if (!warehouse1.is_open()) {
        std::cout << "File cannot be opened." << std::endl;
        return EXIT_FAILURE;
    }

    while (warehouse1 >> temp) {
        fruit1.push_back(temp);
    }
    warehouse1.close();



    warehouse2.open("Warehouse2.txt");
    if (!warehouse2.is_open()) {
        std::cout << "File cannot be opened." << std::endl;
        return EXIT_FAILURE;
    }

    while (warehouse2 >> temp) {
        fruit2.push_back(temp);
    }
    warehouse2.close();


    fruit_union(fruit1,fruit2,funion);
    fruit_intersection(fruit1,fruit2,fintersection);



    intersect.open("intersection.txt");
    if (!intersect.is_open()) {
        std::cout << "File cannot be opened." << std::endl;
        return EXIT_FAILURE;
    }

    for (int i=0;i<size(fintersection);i++) {
        intersect << fintersection[i] << "\t";
    }

    intersect.close();



    unite.open("union.txt");
    if (!unite.is_open()) {
        std::cout << "File cannot be opened." << std::endl;
        return EXIT_FAILURE;
    }

    for (int i=0;i<size(funion);i++) {
        unite << funion[i] << "\t";
    }

    unite.close();


}
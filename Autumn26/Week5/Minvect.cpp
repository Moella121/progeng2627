#include <iostream>
#include <vector>

int min_Vect_element(const std::vector<double>& vin) {
    int pos=-1;
    double min;

    if (size(vin)!=0) {

        min = vin[0];
        pos = 0;

    
        for(int i=0;i<size(vin);i++) {

            if (vin[i] < min) {
                min = vin[i];
                pos = i;

            }

        }
    }
    return pos;
}   

int main() {
    std::vector<double> test;

    test = {1,2,3,4,5};
    std::cout << (min_Vect_element(test)==0) << std::endl;

    test = {1,0.2,3,0.4,5};
    std::cout << (min_Vect_element(test)==1) << std::endl;

    test = {};
    std::cout << (min_Vect_element(test)==-1) << std::endl;

}
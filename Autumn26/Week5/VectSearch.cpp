#include <iostream>
#include <vector>

int search(const std::vector<int>& vin, int n) {

    for (int i=0;i<size(vin);i++) {
        if (vin[i]==n) {
            return i;
        }
    }  

    return -1;

}

int main() {

    std::vector<int> test = {0,1,2,3,4,5,6,7,8,9,10,12};
    
    std::cout << (search(test,0)==0) << std::endl;
    std::cout << (search(test,5)==5) << std::endl;
    std::cout << (search(test,7)==7) << std::endl;
    std::cout << (search(test,11)==-1) << std::endl;
    std::cout << (search(test,12)==11) << std::endl;


}
#include <iostream>
#include <vector>

void append(const std::vector<int>& v1,const std::vector<int>& v2, std::vector<int>& vout) {

    for (int i=0;i<size(v1);i++) {
        vout.push_back(v1[i]);
    }
    for (int i=0;i<size(v2);i++) {
        vout.push_back(v2[i]);
    }

}

int main() {

    std::vector<int> first = {1,7,3,4}, second = {2,-2,19}, result;
    append(first,second,result);

    for (int i=0;i<size(result);i++) {
        std::cout << result[i] << "\t";
    }
    std::cout << std::endl;
    
}
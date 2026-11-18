#include <iostream>
#include <vector>

void merge(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& vout) {

    int i=0,j=0;

    while(i < size(v1) && j < size(v2)) {
            if (v1[i]<=v2[j]) {
                vout.push_back(v1[i]);
                i++;
            }
            else if (v1[i]>v2[j]) {
                vout.push_back(v2[j]);
                j++;
            }
    }
    while (i<size(v1)) {
        vout.push_back(v1[i]);
        i++;
    }
    while (j<size(v2)) {
        vout.push_back(v2[j]);
        j++;
    }

}

int main() {

    std::vector<int> v1,v2,vout = {};
    v1 = {1,2,3,7,15};
    v2= {4,8,19};

    merge(v1,v2,vout);

    for (int i=0;i<size(vout);i++) {
        std::cout << vout[i] << "\t" << std::endl;
    }


}
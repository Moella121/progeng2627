#include <iostream>
#include <vector>


void filter(const std::vector<int>& vin,int n, std::vector<int>& vout) {

    for (int i=0;i<size(vin);i++) {

        if (vin[i] < n) {
            vout.push_back(vin[i]);
        }

    }
}

int main() {

    std::vector<int> list, v;
    int n, a, t;

    std::cout << "Enter the width of your vector: " << std::endl;
    std::cin >> n;

    for (int i=0;i<n;i++) {

        std::cout << "Enter your number" << std::endl;
        std::cin >> a;
        list.push_back(a);

    }

    std::cout << "Enter the filter number: " << std::endl;
    std::cin >> t;

    filter(list, t, v);

    for (int i=0;i<size(v);i++) {

        std::cout << v[i] << "\t";

    }

}
#include <iostream>
#include <vector>

int main() {

    std::vector<int> v;
    bool done = false;
    int n, task;

    while (not done) {

        std::cout << "Enter the value you want to add to the vector: " << std::endl;
        std::cin >> n;
        if (n==-1) {
            done = true;
        }
        else {
            v.push_back(n);
            for (int i=0; i<size(v);i++) {
                std::cout << v[i]  << "\t";
            }    
            std::cout << std::endl;
        }
        

    }

    task = v[0] * (v[1] + v[2]);
    std::cout << "The result of the task is: " << task << std::endl;

}
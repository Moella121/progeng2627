#include <iostream>
#include <vector>

int main() {

    std::vector<int> list;
    std::vector<int> index;
    int n, a, s, count=0;

    std::cout << "Enter the width of your vector: " << std::endl;
    std::cin >> n;

    for (int i=0;i<n;i++) {

        std::cout << "Enter your number" << std::endl;
        std::cin >> a;
        list.push_back(a);

    }

    std::cout << "Enter the occurance number: " << std::endl;
    std::cin >> s;
    for(int i=0;i<size(list);i++) {

        if (list[i]==s) {

            count = count + 1;
            index.push_back(i);
                    
        }

    }

    if (count==0) {
        std::cout << "There are no occurances." << std::endl;
    }
    else{
        std::cout << "There are " << count << " occurances of s, at the indecies:" << std::endl;
        for(int i=0;i<size(index);i++) { 
        
            std::cout<< index[i] << "\t";

        }
    }


}
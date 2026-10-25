#include <iostream>
#include <cmath>

int main(){
    int n;
    bool found_factor = false;

    std::cout << "please enter an integer greater than 1" << std::endl;
    std::cin >> n;

    for(int cf = 2; cf <= sqrt(n); cf++){

        if( (n % cf) == 0){ 
            found_factor = true;
            cf = n;
        }

    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}

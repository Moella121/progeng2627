#include <iostream>

int max(int a,int b,int c) {
    if ((a>b) && (a>c)) {
        return a;
    }
    else if ((b>a) && (b>c)) {
        return b;
    }
    else if ((c>a) && (c>b)) {
        return c;
    }
}

int main() {
    int n1,n2,n3;

    std::cout << "Enter your three numbers: " << std::endl;
    std::cin >> n1 >> n2 >> n3;
    
    std::cout << "The max number is: " << max(n1,n2,n3) << std::endl;

}
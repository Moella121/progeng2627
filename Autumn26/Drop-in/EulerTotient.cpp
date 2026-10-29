#include <iostream>

int gcd(int a,int b) {
    int remainder, larger, smaller;
    bool done = false;
    if (a<=b) {
        larger = b;
        smaller = a;
    }
    else {
        larger = a;
        smaller = b;
    }
    
    while(not done) {

        remainder = larger % smaller;
        if (remainder == 0) {
            return smaller;
        }
        else {
            larger = smaller;
            smaller = remainder;
        }

    }

}

int euler_totient(int n) {
    int count=0;

    for (int i=1;i<n;i++) {
        if (gcd(n,i)==1) {
            count = count + 1;
        }
    }
    return count;

}

int totient_sum(int n, int& depth) {
    depth = 0;
    int sum = 0;

    while(n != 1) {
        n =  euler_totient(n);
        sum = sum + n;
        depth = depth + 1;
    }
    return sum;
}

int localTD_peak(int a, int b, int& dofx, int& dunderx, int& dabovex) {

    int tdepthx=0, tdepth_ux=0, tdepth_ax=0, x=0, depthx=0, depth_ux=0, depth_ax=0;
    double peak_str=0, highest_str=0;

    for(int i=a+1;i<b;i++) {

        totient_sum(i,tdepthx);
        depthx = tdepthx;
        totient_sum(i-1,tdepth_ux);
        depth_ux = tdepth_ux;
        totient_sum(i+1,tdepth_ax);
        depth_ax = tdepth_ax;

        if ((depthx > depth_ax) && (depthx > depth_ux)) {
            peak_str = (depthx - depth_ux + depthx - depth_ax) / 2.0;

            if (peak_str > highest_str) {

                highest_str = peak_str;
                dofx = depthx;
                dunderx = depth_ax;
                dabovex = depth_ux;
                x = i;

            }

        }
    }
    
    if (highest_str == 0) {
        return -1;
    }
    else {
        return x;
    }
    
}


int main() {

    int lower_bound, upper_bound, strongest_x, dx=0, dux=0, dax=0;
    bool valid = false;

    while (not valid) {

        std::cout << "Enter the lower bound: " << std::endl;
        std::cin >> lower_bound;
        std::cout << "Enter the upper bound: " << std::endl;
        std::cin >> upper_bound;
        valid = true;

        if((lower_bound > upper_bound) || (upper_bound <= 1) || (lower_bound <= 1)) {
            std::cout << "Upper bound must be greater than lower bound and neither should be 1 or less." << std::endl;
            valid = false;
        }
    }

    strongest_x = localTD_peak(lower_bound, upper_bound, dx, dux, dax); 
    std::cout << "The strongest local totient peak is at: " << strongest_x << std::endl;
    std::cout << "With a depth of: " << dx << std::endl;
    std::cout << "Depth of x+1: " << dax << std::endl;
    std::cout << "Depth of x-1: " << dux << std::endl;
    

}
#include <iostream>

bool leap_year(int year) {

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            }
            else {
                return 0;
            }
        }
        else {
            return 1;
        }
    }
    else {
        return 0;
    }

}

void next_month(int m1,int y1,int& m2,int& d2,int& y2) {
    if (m1 != 12) {
    m2 = m1 + 1;
    d2 = 1;
    y2=y1;
    }
    else if (m1 == 12) {
        y2 = y1 + 1;
        m2 = 1;
        d2 = 1;
    }
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2) {

    bool month30 = (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11);

    if ((leap_year(y1)) && (m1 == 2) && (d1 == 29)) {
        next_month(m1,y1,m2,d2,y2);
    }
    else if ((!leap_year(y1)) && (m1 == 2) && (d1 == 28)) {
        next_month(m1,y1,m2,d2,y2);
    }
    else if ((month30) && (d1 == 30)) {
        next_month(m1,y1,m2,d2,y2);
    }
    else if((!month30) && (d1 == 31)) {
        next_month(m1,y1,m2,d2,y2);
    }
    else {
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
}

int main() {

    int day1, month1, year1, day2, month2, year2;
    std::cout << "Enter your date (dd mm yyyy): " << std::endl;
    std::cin >> day1 >> month1 >> year1;

    next_date(day1,month1,year1,day2,month2,year2);

    std::cout << "The next date is: " << day2 << "/" << month2 << "/" << year2 << std::endl;
    

}
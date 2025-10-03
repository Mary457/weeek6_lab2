#include <iostream>
using namespace std;

int numberOfDaysInFebruary (int year) {
    if (year%4==0 && year%100!=0||year%400==0) {
        return 29;
    }else {
        return 28;
    }
}

int main () {
    for (int year = 1985; year>=1983; year--) {
        int daysInFebruary  = numberOfDaysInFebruary(year);
        cout<<"Years " <<year<< ": "<<daysInFebruary<<"days in february"<<endl;
    }
    return 0;
}
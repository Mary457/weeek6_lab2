#include <iostream>
using namespace std;

double area (int n, double side) {
    return (n*side*side)/ (4*tan(M_PI/n));
}

int main() {
    int n;
    double side;
    cout<<"Enter the number of sides: ";
    cin>>n;
    cout<<"Enter the length of a side: ";
    cin>>side;
    cout<<"Area of a polygon =  "<<area(n,side)<<endl;
    return 0;
}



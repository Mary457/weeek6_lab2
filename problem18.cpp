#include <iostream>

using namespace std;

double pi=3.1415;
double e=2.7182;

double seriesA (int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += pi* pow(2,-i);
    }
    return sum;
}
double seriesB (int n) {
    double product = 1.0;
    for (int i = 1; i <= n; i++) {
        product *=(pi/2)*pow(i,e);
    }
    return product;
}

double seriesC (int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum+=pow(-1,i)*pow(2,1)/(2*pi+i);
    }
    return sum;
}
double seriesD (int n) {
    double sum_inside_sqrt = 0.0;
    for (int i = 1; i <= n; i++) {
        sum_inside_sqrt += (2*i*pi)/pow(e,i);
    }
    return sum_inside_sqrt;
}

int main () {


    return 0;

}
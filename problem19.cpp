#include <iostream>

using namespace std;

void displayOrderedNumber (double a, double b, double c ) {
    double numbers[3] = { a, b, c };
    if (numbers[0] >numbers[1]) {
        swap(numbers[0], numbers[1]);
    }
    if (numbers[1] > numbers[2]) {
        swap(numbers[1], numbers[2]);
    }
    if (numbers[0] > numbers[1]) {
        swap(numbers[0], numbers[1]);
    }
    cout<<numbers[0]<<" "<<numbers[1]<<" "<<numbers[2]<<endl;
}
int main () {
    double num1, num2, num3;
    cin>>num1>>num2>>num3;
    displayOrderedNumber(num1, num2, num3);
    return 0;
}
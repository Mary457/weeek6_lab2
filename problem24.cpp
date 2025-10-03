#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isPrime(int number ) {
    if (number <=1) {
        return false;
    }
    for (int i=2; i<=sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int reverseNumber(int number) {
    int reverseNumber = 0;
    while (number>0) {
        int digit= number%10;
        reverseNumber = reverseNumber*10 + digit;
        number = number/10;
    }
    return reverseNumber;
}
bool isPalindrome(int number) {
    int reversedNumber = reversedNumber(number);
    if (reversedNumber == number) {
        return true;
    }else {
        return false;
    }
}
int main() {
    int count =0;
    int n=10;
    int col=10;
    while (count<100) {
        if (isPrime(n) && isPrime(reverseNumber(n) && !isPalindrome(n))) {
            cout<<n;
            col++;
            count++;
        } if (count%10==0) {
            cout<<endl;
        } else {
            cout<<setw(8);
        }
    }
    n++;
}
 return 0 ;




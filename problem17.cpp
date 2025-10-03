#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

bool isPalindrome(int num) {
    string s = to_string(num);
    string reversed_s=s;
    reverse(reversed_s.begin(), reversed_s.end());
    return s == reversed_s;
}
void findAndDisplayEvenPalindrome() {
    int count =0;
    int num = 0 ;
    cout<<"first 50 even palindrome numbers:"<<endl;
    while (count <50) {
        if (num%2==0 && isPalindrome(num)) {
            cout<<setw(6)<<num;
            count ++;
            if (count %5 ==0) {
                cout<<endl;
            }
        }
        num++;
    }
    if (count%5!=0) {
        cout<<endl;
    }

}
int main() {
    findAndDisplayEvenPalindrome();
    return 0;
}




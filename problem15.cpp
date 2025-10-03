#include <iostream>

using namespace std;

void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0 ;
    for (char c= ch1; c<=ch2; ++c) {
        cout<<static_cast<int>(c)<<"";
        count++;
        if (count % numberPerLine == 0) {
            cout<<endl;
        }
    }
    if (count%numberPerLine != 0) {
        cout<<endl;
    }
}

int main () {
    cout<<"display ASCII values from 'a' to 'm', 6 per line:"<<endl;
printASCII('a','m',6);
return 0;
}
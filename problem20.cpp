#include <iostream>
using namespace std;

string convertMillis (long millis) {
    int second = millis/1000;
    int minutes = second/60;
    int hours = minutes/60;

    return to_string(hours) + ":" + to_string(minutes%60)+":" + to_string(second%60);
}

int main() {
    cout<<convertMillis(5555500000)<<endl;
    return 0;
}
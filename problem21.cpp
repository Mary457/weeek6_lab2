#include <iostream>
#include <ctime>
using namespace std;

int main () {
    time_t now = time(0);
    tm*ltm = localtime(&now);
    cout<<"current date and time is " <<1990 + ltm->tm_year <<"-"<<1 + ltm->tm_mon<<"-"
    <<ltm->tm_mday<<" "
    <<ltm->tm_hour<<":"
    <<ltm->tm_min<<":"
    <<ltm->tm_sec<<endl;
    return 0;
}


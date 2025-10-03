#include <iostream>
using namespace std;

int rollDice() {
    int die1 = rand() %6 +1;
    int die2 = rand() %6 +1;
    cout<<"you're rolled " <<die1<< " + "<<die2<<" = "<<(die1+die2)<<endl;
    return die1+die2;
}
int main () {
    srand(time(0));
    int sum = rollDice();
    if (sum==7 ||sum==11) {
     cout<<"you win"<<endl;
    } else if (sum==2||sum==3||sum==12) {
        cout<<"you lose"<<endl;
    } else {
        int point =sum;
        cout << "point is "<<point<<endl;

        while (true) {
            sum= rollDice();
            if (sum==point) {
                cout<<"you win"<<endl;
                break;
            }else if (sum==7 ) {
                cout<<"you lose"<<endl;
                break;
            }
        }
    }
}


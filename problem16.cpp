#include <iostream>
#include <vector>
#include <iomanip>


using namespace std;

void printMatrix(int n ) {
    vector<vector<int> > matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matrix[i][j] = rand() %1001;

        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<setw(5)<<matrix[i][j]<<" ";
        }
    }
    cout<<endl;
}
int main() {
    int n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;
    if (n>0) {
        cout<<"display an "<<n<<"-by-"<<n<<"matrix:"<<endl;
        printMatrix(n);
    } else {
        cout<<"matrix size must b ea positive number."<<endl;
    }
    return 0;
}


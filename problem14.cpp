#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double futureInvestmentValue (double investmentAmount, double monthlyRate, int years) {
   double future = 0;
   future= investmentAmount *pow(1+monthlyRate , 12*years);
   return future;
}
int main() {
   for (int i = 1; i <= 10; i++) {
      cout<<i<<" "<<futureInvestmentValue(1000, 0.27/12.0) <<endl;
   }
   return 0;
}

#include <iostream>
using namespace std;
void primeNumbers (int lbound, int ubound) {
   int flag, i;
   while (lbound <= ubound) {
      flag = 0;
      for(i = 2; i <= lbound/2; i++) {
         if(lbound % i == 0) {
            flag = 1;
            break;
         }
      }
      if (flag == 0)
      cout<<lbound<<" ";
      lbound++;
   }
} 

int main() {
   int lowerbound = 20, upperbound = 50;
   cout<<"Prime numbers between "<<lowerbound<<" and "<<upperbound<<" are: ";
   primeNumbers(lowerbound,upperbound);
   return 0;
}

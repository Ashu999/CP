#include <iostream>
using namespace std;

long factorialDP(int n) {
   long fact[100] = {0};
   if (n >= 0)  {
      fact[0] = 1;
      for (int i = 1; i <= n; ++i) 
         fact[i] = i * fact[i - 1];
      return fact[n];
   }
}

int main() {
   int n;
   cin>>n;
   cout<<factorialDP(n)<<endl;
    return 0;
}

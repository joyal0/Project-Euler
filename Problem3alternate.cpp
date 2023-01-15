#include<cmath>
#include<iostream>
using namespace std;
long long getMaxPrimefactor(long long n) {
   long long maxPF = -1;
   while (n % 2 == 0) {
      maxPF = 2;
      n /= 2;
   }
   for (int i = 3; i*i <= n; i += 2) {
      while (n % i == 0) {
         maxPF = i;
         n = n / i;
      }
   }
   if (n > 2)
   maxPF = n;
   return maxPF;
}
int main() {
   long long n = 600851475143;
   cout << "Max Prime factor of " << n << " is " << getMaxPrimefactor(n);
   return 0;
}
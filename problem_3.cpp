// Largest prime factor
#include <iostream>
using namespace std;

bool func_prime(long long int n) {
  bool prime = true;
  for (long long int i = 2; i < n/2; i++) {
    if ((n%i)==0) {
      prime = false;
      break;
    }
  }
  return prime;
}

int main() {
  long long int N = 600851475143;
  long long int large = 1;
  long long int lastj = N;
  for (long long int i = 2; i <= N/2; i++) {
    long long int j = N/i;
    if (j == lastj) {
      lastj = j;
      continue;
    }
    lastj = j;
    std::cout << j << '\n';
    if (N%j==0) {
      if (func_prime(j)) {
        large = j;
        break;
      }
    }
  }
  std::cout << "Largest prime factor of 600851475143 is " << large << '\n';
  return 0;
}

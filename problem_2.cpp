// Sum of even valued terms of the Fibonacci series
#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int a = 1;
  int b = 2;
  while (b<=4000000) {
    if (b%2==0) {
      sum = sum + b;
    }
    b = b + a;
    a = b - a;
  }
  std::cout << "Sum of even-valued terms of Fibonacci series is " << sum << '\n';
  return 0;
}

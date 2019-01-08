// Sum of all the multiples of 3 or 5 below 1000
#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  for(int x = 1; x<1000;x=x+1) {
    if (x%3==0 || x%5==0) {
      sum = sum + x;
    }
  }
  std::cout << "Sum of all multiples of 3 or 5 below 1000 is " << sum << '\n';
  return 0;
}

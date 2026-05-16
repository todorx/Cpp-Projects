#include <iostream>
using namespace std;

int mostSignificantDigit(int number) {
  int digit = 0;
  while (number) {
    digit = number % 10;
    number /= 10;
  }

  return digit;
}

int main() {
  int n;

  int numberWithLargestDigit = 0, largestDigit = 0;
  while (cin >> n && n != 0) {
    for (int i = 0; i < n; i++) {
      int number;
      cin >> number;
      int digit = mostSignificantDigit(number);
      if (digit > largestDigit) {
        largestDigit = digit;
        numberWithLargestDigit = number;
      }
    }
    cout << numberWithLargestDigit << endl;
    numberWithLargestDigit = 0;
    largestDigit = 0;
  }
}
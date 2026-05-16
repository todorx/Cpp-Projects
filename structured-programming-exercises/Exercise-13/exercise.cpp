#include <iostream>
using namespace std;

int findMaxDigit(int number, int maxNumber) {
  if (number == 0) return maxNumber;

  int digit = number % 10;
  if (digit > maxNumber) maxNumber = digit;
  return findMaxDigit(number / 10, maxNumber);
}
int main() {
  int num;

  while (cin >> num) {
    cout << findMaxDigit(num, 0) << endl;
  }
}
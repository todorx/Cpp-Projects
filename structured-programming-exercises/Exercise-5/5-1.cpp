#include <iostream>
using namespace std;

double calculateFraction(int* values, int n, int index) {
  if (index == n - 1) return values[index];

  return *(values + index) + 1.0 / calculateFraction(values, n, index + 1);
}

int main() {
  int n;
  cin >> n;

  int values[n];

  for (int i = 0; i < n; i++) {
    cin >> values[i];
  }

  cout << calculateFraction(values, n, 0);
}
#include <iostream>
using namespace std;
// Helper function used
double calculateFraction(int* values, int n, int index) {
  // if we are at the last term of the continued fraction
  if (index == n - 1) return values[index];

  // a_br + 1 / (next part of the continued fraction)
  return values[index] + 1.0 / calculateFraction(values, n, index + 1);
}

int main() {
  int n;
  cin >> n;

  int values[100];

  for (int i = 0; i < n; i++) {
    cin >> values[i];
  }

  cout << calculateFraction(values, n, 0);
}
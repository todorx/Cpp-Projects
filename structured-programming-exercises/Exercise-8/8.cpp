#include <iostream>
using namespace std;

int countPositive(int values[], int n) {
  if (n == 0) return 0;

  if (*values > 0)
    return 1 + countPositive(values + 1, n - 1);
  else
    return countPositive(values + 1, n - 1);
}

int main() {
  int n, values[100];

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> values[i];
  }

  cout << countPositive(values, n);
}
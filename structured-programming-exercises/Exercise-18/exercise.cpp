#include <iostream>
using namespace std;

int printPattern(int n, int x) {
  if (n == 0) return 0;

  cout << n - x;
  if (x == n) {
    cout << endl;
    return printPattern(n -= 1, 1);
  }
  return printPattern(n, x += 1);
}

int main() {
  int n;
  cin >> n;

  int d = printPattern(n, n - 1);
}
#include <iostream>
using namespace std;

int main() {
  double n, matrix[100][100];
  cin >> n;
  double x, y;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
      if (i > j) {  // Pod glavna
        x += matrix[i][j];
      }
      if (j > n - 1 - i) {  // Pod sporedna
        y += matrix[i][j];
      }
    }
  }
  double matrixB[100][100];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matrixB[i][j] = 0;
      if (i == j) {  // Main diagonal
        matrixB[i][j] = x;
      }
      if (j == n - 1 - i) {  // Secondary diagonal
        matrixB[i][j] = y;
      }

      if (j == (n - 1) / 2 && i == (n - 1) / 2) {
        matrixB[i][j] = y + x;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrixB[i][j] << " ";
    }
    cout << endl;
  }
}
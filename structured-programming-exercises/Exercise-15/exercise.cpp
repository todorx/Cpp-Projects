#include <iostream>
using namespace std;

int main() {
  int m, n;
  int matrix[100][100];

  cin >> m >> n;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  if (n % 2 == 0) {
    int indexOne = n / 2;
    int indexTwo = n / 2 - 1;
    int sumaLeft = 0;
    int sumaRight = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (j < indexOne) sumaLeft += matrix[i][j];
        if (j >= indexOne) sumaRight += matrix[i][j];
      }
      int result = abs(sumaLeft - sumaRight);
      matrix[i][indexOne] = result;
      matrix[i][indexTwo] = result;
      sumaLeft = 0;
      sumaRight = 0;
    }
  } else {
    int index = n / 2;
    int sumaLeft = 0;
    int sumaRight = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (j <= index) sumaLeft += matrix[i][j];
        if (j >= index) sumaRight += matrix[i][j];
      }
      int result = abs(sumaLeft - sumaRight);
      matrix[i][index] = result;
      sumaLeft = 0;
      sumaRight = 0;
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}
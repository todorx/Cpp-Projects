#include <iostream>
using namespace std;

int main() {
  int x, m, n, matrix[100][100];
  cin >> x;

  cin >> m >> n;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    int rowSum = 0;
    for (int j = 0; j < n; j++) {
      rowSum += matrix[i][j];
    }

    if (rowSum > x) {
      for (int z = 0; z < n; z++) {
        matrix[i][z] = 1;
      }
    } else if (rowSum < x) {
      for (int z = 0; z < n; z++) {
        matrix[i][z] = -1;
      }
    } else
      for (int z = 0; z < n; z++) {
        matrix[i][z] = 0;
      }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}
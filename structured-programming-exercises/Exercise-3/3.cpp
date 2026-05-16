#include <iostream>
using namespace std;

int main() {
  int m, n, matrix[100][100];

  cin >> m >> n;

  int results[m];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  int w = 0;

  for (int i = 0; i < m; i++) {
    double sum_red = 0;
    for (int j = 0; j < n; j++) {
      sum_red += matrix[i][j];
    }

    double median = sum_red / n;

    double max = 0;
    int index = 0;

    for (int d = 0; d < n; d++) {
      double rez = abs(matrix[i][d] - median);
      if (rez > max) {
        max = rez;
        index = matrix[i][d];
      }
    }

    results[w++] = index;
  }

  for (int d = 0; d < w; d++) {
    cout << results[d] << " ";
  }
}
#include <iostream>
using namespace std;

int poramnet(int a) {
  if (a == 0) return 0;

  int cifra = a % 10;
  if (cifra == 9) cifra == 7;

  return poramnet(a / 10) * 10 + cifra;
}

// void bubbleSort(int *array, int n)
// {
// }

int main() {
  int b, niza[100], g = 0;

  while (cin >> b) {
    niza[g++] = b;
  }

  // bubbleSort(niza, g);

  for (int i = 0; i < g; i++) {
    cout << poramnet(niza[i]) << " ";
  }
}
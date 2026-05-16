#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char z1, z2;

  cin >> z1 >> z2;

  cin.ignore();

  char line[80];

  while (cin.getline(line, 80) && line[0] != '#') {
    int indexOne = 0, indexTwo = 0;
    for (int i = 0; i < strlen(line); i++) {
      if (line[i] == z1) {
        indexOne = i;
        break;
      }
    }

    for (int i = indexOne; i < strlen(line); i++) {
      if (line[i] == z2) {
        indexTwo = i;
        break;
      }
    }

    for (int i = indexOne + 1; i < indexTwo; i++) {
      cout << line[i];
    }
    cout << endl;
  }
}
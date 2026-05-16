#include <cstring>
#include <iostream>
using namespace std;

void transform(char* n, int x) {
  if (*n == '\0') return;

  if (isupper(*n)) {
    *n = 'A' + (*n - 'A' + x) % 26;
  }

  if (islower(*n)) {
    *n = 'a' + (*n - 'a' + x) % 26;
  }

  transform(n += 1, x);
}

int main() {
  int n, x;

  cin >> n >> x;

  char line[100];
  cin.ignore();
  for (int i = 0; i < n; i++) {
    cin.getline(line, 80);
    if (strlen(line) <= 0) {
      break;
    }
    transform(line, x);

    cout << line << endl;
  }
}
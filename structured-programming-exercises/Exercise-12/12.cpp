#include <iostream>
using namespace std;

int replaceNinesWithSevens(int a) {
  if (a == 0) return 0;

  int digit = a % 10;
  if (digit == 9) digit = 7;

  return replaceNinesWithSevens(a / 10) * 10 + digit;
}

void bubbleSort(int* array, int n) {
  bool isChanged = true;
  while (isChanged) {
    for (int i = 0; i < n - 1; i++) {
      isChanged = false;
      for (int j = 0; j < n - i - 1; j++) {
        if (array[j] > array[j + 1]) {
          swap(array[j], array[j + 1]);
          isChanged = true;
        }
      }
    }
  }
}

int main() {
  int b, numbers[100], count = 0;

  while (cin >> b) {
    numbers[count++] = b;
  }

  for (int i = 0; i < count; i++) {
    numbers[i] = replaceNinesWithSevens(numbers[i]);
  }

  if (count > 1) bubbleSort(numbers, count);

  int limit = 0;
  if (count >= 5)
    limit = 5;
  else
    limit = count;
  for (int i = 0; i < limit; i++) {
    cout << numbers[i] << " ";
  }
}
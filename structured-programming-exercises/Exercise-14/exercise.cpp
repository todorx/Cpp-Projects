#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

bool isVowel(char character) {
  character = tolower(character);
  return (character == 'a' || character == 'e' || character == 'i' ||
          character == 'o' || character == 'u');
}

int main() {
  char line[100];

  int count = 0;
  while (cin.getline(line, 100) && line[0] != '#') {
    for (int i = 0; i < strlen(line); i++) {
      if ((isVowel(line[i]) && isVowel(line[i + 1]))) {
        cout << (char)tolower(line[i]) << (char)tolower(line[i + 1]) << endl;
        count++;
      }
    }
  }
  cout << count;
}
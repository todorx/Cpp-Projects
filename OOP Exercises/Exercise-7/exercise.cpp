#include <iostream>
using namespace std;

// ТУКА СТАВИ ЈА ТВОЈАТА КЛАСА "Stopwatch"

class Stopwatch {
    int seconds;

  public:
    Stopwatch(int s) { seconds = s; }

    int const getSeconds() { return seconds; }

    Stopwatch &operator++() {
        seconds++;
        return *this;
    }

    Stopwatch operator++(int) {
        Stopwatch s = *this;
        seconds++;
        return s;
    }

    Stopwatch &operator--() {
        seconds--;
        return *this;
    }

    Stopwatch operator--(int) {
        Stopwatch s = *this;
        seconds--;
        return s;
    }
};

int main() {
    Stopwatch s(10);

    cout << "Pocetna vrednost: " << s.getSeconds() << "s" << endl;

    // Тест Префикс ++
    cout << "Test ++s (treba 11): " << (++s).getSeconds() << "s" << endl;

    // Тест Постфикс ++
    cout << "Test s++ (treba 11): " << (s++).getSeconds() << "s" << endl;
    cout << "Vrednost posle s++ (treba 12): " << s.getSeconds() << "s" << endl;

    // Тест Префикс --
    cout << "Test --s (treba 11): " << (--s).getSeconds() << "s" << endl;

    // Тест Постфикс --
    cout << "Test s-- (treba 11): " << (s--).getSeconds() << "s" << endl;
    cout << "Finalna vrednost (treba 10): " << s.getSeconds() << "s" << endl;

    return 0;
}
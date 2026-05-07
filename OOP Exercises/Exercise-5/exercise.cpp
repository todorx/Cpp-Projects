#include <cstring>
#include <iostream>
using namespace std;

class Patnik {

    char ime[100];
    int klasaVagon;
    bool velosiped;

  public:
    Patnik() {}
    Patnik(char *name, int kv, bool v) {
        strncpy(ime, name, strlen(name) + 1);
        klasaVagon = kv;
        velosiped = v;
    }

    int getVelosiped() const { return velosiped; }

    friend ostream &operator<<(ostream &os, const Patnik &p) {
        os << p.ime << " " << p.klasaVagon << " " << p.velosiped;
        return os;
    }
};

class Voz {
    char krajnaDest[100];
    Patnik *patnik;
    int brEl;
    int brVelo;

  public:
    Voz() {
        patnik = new Patnik[0];
        brEl = 0;
        brVelo = 0;
        krajnaDest[0] = '\0';
    }

    Voz(char *dest, int mv) {
        strncpy(krajnaDest, dest, strlen(dest) + 1);
        brVelo = mv;
        brEl = 0;
        patnik = new Patnik[brEl];
    }

    Voz &operator+=(const Patnik &p) {
        if (brVelo + p.getVelosiped() > brVelo)
            return *this;

        Patnik *tmp = new Patnik[brEl + 1];
        for (int i = 0; i < brEl; i++) {
            tmp[i] = patnik[i];
        }

        tmp[brEl++] = p;
        delete[] patnik;
        patnik = tmp;

        return *this;
    }

    friend ostream &operator<<(ostream &os, const Voz &v) {
        os << v.krajnaDest;
        for (int i = 0; i < v.brEl; i++) {
            os << v.patnik[i] << endl;
        }

        return os;
    }

    void patniciNemaMesto() {}

    ~Voz() { delete[] patnik; }
};

int main() {
    Patnik p;
    char ime[100], destinacija[100];
    int n;
    bool velosiped;
    int klasa;
    int maxv;
    cin >> destinacija >> maxv;
    cin >> n;
    Voz v(destinacija, maxv);
    // cout<<v<<endl;
    for (int i = 0; i < n; i++) {
        cin >> ime >> klasa >> velosiped;
        Patnik p(ime, klasa, velosiped);
        // cout<<p<<endl;
        v += p;
    }
    cout << v;
    v.patniciNemaMesto();

    return 0;
}

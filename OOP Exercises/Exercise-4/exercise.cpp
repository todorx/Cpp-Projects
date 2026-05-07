#include <cstring>
#include <iostream>
using namespace std;

enum tip { pop, rap, rock };

class Pesna {
    char *ime;
    int vremetraenje;
    tip t;

  public:
    // Konstruktori
    Pesna() {}

    Pesna(char *name, int minutes, tip type) {
        ime = new char[strlen(name) + 1];
        strncpy(ime, name, strlen(name) + 1);

        vremetraenje = minutes;
        t = type;
    }
    // Metodi

    int getVremetranje() { return vremetraenje; }

    void pecati() { cout << '"' << ime << '"' << "-" << vremetraenje << "min" << endl; }
    // Destruktor
};

class CD {
    Pesna pesni[10];
    int snimeniPesni;
    int maxVremetraenje;

  public:
    // Konstruktori
    CD() : snimeniPesni(0), maxVremetraenje(0) {}
    CD(int mv) : snimeniPesni(0), maxVremetraenje(mv) {}

    // Metodi
    void dodadiPesna(Pesna p) {
        maxVremetraenje = 0;
        for (int i = 0; i < snimeniPesni; i++) {
            maxVremetraenje += pesni[i].getVremetranje();
        }
        int mx = maxVremetraenje + p.getVremetranje();

        if (maxVremetraenje < mx)
            return;

        pesni[snimeniPesni++] = p;
    }

    void pecatiPesniPoTip(tip t) {}
};

int main() {
    // se testira zadacata modularno
    int testCase;
    cin >> testCase;

    int n, minuti, kojtip;
    char ime[50];

    if (testCase == 1) {
        cout << "===== Testiranje na klasata Pesna ======" << endl;
        cin >> ime;
        cin >> minuti;
        cin >> kojtip; // se vnesuva 0 za POP,1 za RAP i 2 za ROK
        Pesna p(ime, minuti, (tip)kojtip);
        p.pecati();
    } else if (testCase == 2) {
        cout << "===== Testiranje na klasata CD ======" << endl;
        CD omileno(20);
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ime;
            cin >> minuti;
            cin >> kojtip; // se vnesuva 0 za POP,1 za RAP i 2 za ROK
            Pesna p(ime, minuti, (tip)kojtip);
            omileno.dodadiPesna(p);
        }
        for (int i = 0; i < n; i++)
            (omileno.getPesna(i)).pecati();
    } else if (testCase == 3) {
        cout << "===== Testiranje na metodot dodadiPesna() od klasata CD ======" << endl;
        CD omileno(20);
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ime;
            cin >> minuti;
            cin >> kojtip; // se vnesuva 0 za POP,1 za RAP i 2 za ROK
            Pesna p(ime, minuti, (tip)kojtip);
            omileno.dodadiPesna(p);
        }
        for (int i = 0; i < omileno.getBroj(); i++)
            (omileno.getPesna(i)).pecati();
    } else if (testCase == 4) {
        cout << "===== Testiranje na metodot pecatiPesniPoTip() od klasata CD ======" << endl;
        CD omileno(20);
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ime;
            cin >> minuti;
            cin >> kojtip; // se vnesuva 0 za POP,1 za RAP i 2 za ROK
            Pesna p(ime, minuti, (tip)kojtip);
            omileno.dodadiPesna(p);
        }
        cin >> kojtip;
        omileno.pecatiPesniPoTip((tip)kojtip);

    } else if (testCase == 5) {
        cout << "===== Testiranje na metodot pecatiPesniPoTip() od klasata CD ======" << endl;
        CD omileno(20);
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ime;
            cin >> minuti;
            cin >> kojtip; // se vnesuva 0 za POP,1 za RAP i 2 za ROK
            Pesna p(ime, minuti, (tip)kojtip);
            omileno.dodadiPesna(p);
        }
        cin >> kojtip;
        omileno.pecatiPesniPoTip((tip)kojtip);
    }

    return 0;
}
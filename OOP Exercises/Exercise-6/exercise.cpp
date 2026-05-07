#include <cstring>
#include <iostream>
using namespace std;

class Automobile {
    char *brand;
    int *registration;
    int maxSpeed;

  public:
    Automobile() {
        brand = nullptr;
        registration = nullptr;
        maxSpeed = 0;
    }
    Automobile(char *marka, int *reg, int mxBr) {
        brand = new char[strlen(marka) + 1];
        strncpy(brand, marka, strlen(marka) + 1);

        registration = new int[5];
        for (int i = 0; i < 5; i++) {
            registration[i] = reg[i];
        }
        maxSpeed = mxBr;
    }

    Automobile(const Automobile &a) {
        brand = new char[strlen(a.brand) + 1];
        strncpy(brand, a.brand, strlen(a.brand) + 1);

        registration = new int[5];
        for (int i = 0; i < 5; i++) {
            registration[i] = a.registration[i];
        }

        maxSpeed = a.maxSpeed;
    }

    Automobile &operator=(const Automobile &a) {
        if (this != &a) {
            delete[] brand;
            delete[] registration;

            brand = new char[strlen(a.brand) + 1];
            strncpy(brand, a.brand, strlen(a.brand) + 1);

            registration = new int[5];
            for (int i = 0; i < 5; i++) {
                registration[i] = a.registration[i];
            }

            maxSpeed = a.maxSpeed;
        }

        return *this;
    }

    // Set i get metodi

    int *getRegistration() { return registration; }
    char *getBrand() { return brand; }
    int getMaxSpeed() { return maxSpeed; }

    void setRegistration(int *newReg) {
        registration = new int[5];
        for (int i = 0; i < 5; i++) {
            registration[i] = newReg[i];
        }
    }

    void setBrand(const char *newBrand) {
        brand = new char[strlen(newBrand) + 1];
        strncpy(brand, newBrand, strlen(newBrand) + 1);
    }

    void setMaxSpeed(int speed) { maxSpeed = speed; }

    // Operatori
    bool operator==(const Automobile &a) { return registration == a.registration; }

    friend ostream &operator<<(ostream &os, const Automobile &a) {
        os << "Brand:\t" << a.brand << "\tRegistracija: [";
        for (int i = 0; i < 5; i++) {
            os << a.registration[i] << " ";
        }
        os << "]";

        return os;
    }

    ~Automobile() {
        delete[] brand;
        delete[] registration;
    }
};

class RentACar {
    char name[100];
    Automobile *autos;
    int numAutos;

  public:
    RentACar(const char *n = nullptr) {
        strncpy(name, n, strlen(n));
        numAutos = 0;
        autos = new Automobile[numAutos];
    }

    RentACar(const RentACar &r) {
        strncpy(name, r.name, strlen(r.name));
        numAutos = r.numAutos;
        autos = new Automobile[numAutos];
        for (int i = 0; i < numAutos; i++) {
            autos[i] = r.autos[i];
        }
    }

    RentACar &operator=(const RentACar &r) {
        if (this != &r) {
            delete[] autos;
            strncpy(name, r.name, strlen(r.name));
            numAutos = r.numAutos;
            autos = new Automobile[numAutos];
            for (int i = 0; i < numAutos; i++) {
                autos[i] = r.autos[i];
            }
        }

        return *this;
    }

    RentACar &operator+=(const Automobile &a) {
        Automobile *temp = new Automobile[numAutos + 1];
        for (int i = 0; i < numAutos; i++) {
            temp[i] = autos[i];
        }

        temp[numAutos++] = a;
        delete[] autos;

        autos = temp;

        return *this;
    }

    RentACar &operator-=(const Automobile &a) {
        bool voNiza = false;

        for (int i = 0; i < numAutos; i++) {
            if (autos[i] == a)
                voNiza = true;
        }

        if (!voNiza)
            return *this;

        Automobile *temp = new Automobile[numAutos - 1];
        for (int i = 0; i < numAutos - 1; i++) {
            if (!(autos[i] == a))
                temp[i] = autos[i];
        }

        delete[] autos;
        --numAutos;
        autos = new Automobile[numAutos];
        autos = temp;
    }

    void pecatiNadBrzina(int max) {
        cout << name << endl;
        for (int i = 0; i < numAutos; i++) {
            if (autos[i].getMaxSpeed() > max) {
                cout << autos[i];
            }
        }
    }

    ~RentACar() { delete[] autos; }
};

int main() {
    RentACar agencija("Ecode-Car");
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char marka[100];
        int regisracija[5];
        int maximumBrzina;

        cin >> marka;

        for (int i = 0; i < 5; i++)
            cin >> regisracija[i];

        cin >> maximumBrzina;

        Automobile nov = Automobile(marka, regisracija, maximumBrzina);

        // dodavanje na avtomobil
        agencija += nov;
    }
    // se cita grehsniot avtmobil, za koj shto avtmobilot so ista registracija treba da se izbrishe
    char marka[100];
    int regisracija[5];
    int maximumBrzina;
    cin >> marka;
    for (int i = 0; i < 5; i++)
        cin >> regisracija[i];
    cin >> maximumBrzina;

    Automobile greshka = Automobile(marka, regisracija, maximumBrzina);

    // brishenje na avtomobil
    agencija -= greshka;

    agencija.pecatiNadBrzina(150);

    return 0;
}
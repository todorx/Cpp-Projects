#include <iostream>
#include <cstring>
using namespace std;

class Vozac
{
protected:
    char name[100];
    int age;
    int numRaces;
    bool veteran;

public:
    Vozac() {}
    Vozac(char *n, int a, int nm, bool v) : age(a), numRaces(nm), veteran(v)
    {
        strncpy(name, n, strlen(n) + 1);
    }

    virtual void print(ostream &os) const
    {
        os << name << endl;
        os << age << endl;
        os << numRaces << endl;
        if (veteran)
            cout << "VETERAN" << endl;
    }

    virtual int danok() = 0;

    virtual int income() = 0;

    bool operator==(Vozac &v)
    {
        return this->income() == v.income();
    }

    friend ostream &operator<<(ostream &os, const Vozac &v)
    {
        v.print(os);
        return os;
    }
};

class Avtomobilist : public Vozac
{
    int carPrice;

public:
    Avtomobilist() {}
    Avtomobilist(char *ime, int vozrast, int trki, bool vet, int cena_avto) : Vozac(ime, vozrast, trki, vet)
    {
        carPrice = cena_avto;
    }
    int danok() override
    {
        if (numRaces > 10)
            return income() * 0.15;
        return income() * 0.1;
    }

    int income() override
    {
        return carPrice / 5;
    }
};

class Motociklist : public Vozac
{
    int engineSize;

public:
    Motociklist() : Vozac() {}
    Motociklist(char *ime, int vozrast, int trki, bool vet, int es) : Vozac(ime, vozrast, trki, vet)
    {
        engineSize = es;
    }
    int danok() override
    {
        if (veteran)
            return income() * 0.25;
        return income() * 0.2;
    }

    int income() override
    {
        return engineSize * 20;
    }
};

int soIstaZarabotuvachka(Vozac **niza, int n, Vozac *v)
{

    int size = 0;

    for (int i = 0; i < n; i++)
    {
        if (*niza[i] == *v)
            size++;
    }

    return size;
}

int main()
{
    int n, x;
    cin >> n >> x;
    Vozac **v = new Vozac *[n];
    char ime[100];
    int vozrast;
    int trki;
    bool vet;
    for (int i = 0; i < n; ++i)
    {
        cin >> ime >> vozrast >> trki >> vet;
        if (i < x)
        {
            float cena_avto;
            cin >> cena_avto;
            v[i] = new Avtomobilist(ime, vozrast, trki, vet, cena_avto);
        }
        else
        {
            int mokjnost;
            cin >> mokjnost;
            v[i] = new Motociklist(ime, vozrast, trki, vet, mokjnost);
        }
    }
    cout << "=== DANOK ===" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << *v[i];
        cout << v[i]->danok() << endl;
    }
    cin >> ime >> vozrast >> trki >> vet;
    int mokjnost;
    cin >> mokjnost;
    Vozac *vx = new Motociklist(ime, vozrast, trki, vet, mokjnost);
    cout << "=== VOZAC X ===" << endl;
    cout << *vx;
    cout << "=== SO ISTA ZARABOTUVACKA KAKO VOZAC X ===" << endl;
    cout << soIstaZarabotuvachka(v, n, vx);
    for (int i = 0; i < n; ++i)
    {
        delete v[i];
    }
    delete[] v;
    delete vx;
    return 0;
}
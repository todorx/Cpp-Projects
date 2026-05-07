#include <cstring>
#include <iostream>
using namespace std;

class Chocolate {
    char ime[100];
    int price;

  public:
    // Konstruktori
    Chocolate() : price(0) { ime[0] = '\0'; }

    Chocolate(char *name, int price) {
        strncpy(ime, name, strlen(name) + 1);
        this->price = price;
    }

    // Geteri

    int getPrice() { return price; }

    // Operatori

    friend ostream &operator<<(ostream &os, const Chocolate &c) {
        os << c.ime << ": $" << c.price << endl;
        return os;
    }
};

class ChocolateFactory {
    Chocolate *products;
    int *weeklyProductions;
    int numProducts;

  public:
    // Konstruktori
    ChocolateFactory() {
        numProducts = 0;
        products = new Chocolate[numProducts];
        weeklyProductions = new int[numProducts];
    }

    ChocolateFactory(Chocolate *p, int *wp, int np) : numProducts(np) {
        products = new Chocolate[numProducts];
        for (int i = 0; i < numProducts; i++) {
            products[i] = p[i];
        }

        weeklyProductions = new int[sizeof(wp)]; // TODO Proveri dali e ok?
        for (int i = 0; i < sizeof(wp); i++) {
            weeklyProductions[i] = wp[i];
        }
    }

    // Metodi ( Funkcii )

    int weeklyIncome() {
        int suma = 0;
        for (int i = 0; i < numProducts; i++) {
            suma += products[i].getPrice();
        }
        return suma;
    }

    // Operatori

    ChocolateFactory &operator=(const ChocolateFactory &c) {
        if (this != &c) {
            delete[] products;
            delete[] weeklyProductions;

            numProducts = c.numProducts products = new Chocolate[numProducts];
            for (int i = 0; i < numProducts; i++) {
                products[i] = c.products[i];
            }

            weeklyProductions = new int[sizeof(c.weeklyProductions)]; // TODO Proveri dali e ok?
            for (int i = 0; i < sizeof(c.weeklyProductions))
                ; i++) {
                weeklyProductions[i] = c.weeklyProductions[i];
            }
        }
        return *this;
    }

    ChocolateFactory operator+(const ChocolateFactory &c) {}

    bool operator<(const ChocolateFactory &c) {}
    bool operator>(const ChocolateFactory &c) {}

    friend ostream &operator<<(ostream &os, const ChocolateFactory &c) {}

    // Destruktor
    ~ChocolateFactory() {
        delete[] products;
        delete[] weeklyProductions;
    }
};

int main() {
    int testCase;
    char name[100];
    int price;

    Chocolate products[100];
    int weeklyProduction[100];

    cin >> testCase;
    if (testCase == 0) {
        cout << "Testing Chocolate print operator:" << endl;
        for (int i = 0; i < 10; ++i) {
            cin >> name >> price;
            cout << Chocolate(name, price) << endl;
        }
    } else if (testCase == 1) {
        cout << "Testing ChocolateFactory print operator:" << endl;

        for (int i = 0; i < 10; ++i) {
            cin >> name >> price;
            products[i] = Chocolate(name, price);
            cin >> weeklyProduction[i];
        }

        ChocolateFactory cf(products, weeklyProduction, 10);
        cout << cf << endl;
    } else if (testCase == 2) {
        cout << "Testing ChocolateFactory comparison operators:" << endl;

        for (int i = 0; i < 3; ++i) {
            cin >> name >> price >> weeklyProduction[i];
            products[i] = Chocolate(name, price);
        }
        ChocolateFactory cf1 = ChocolateFactory(products, weeklyProduction, 3);

        for (int i = 0; i < 4; ++i) {
            cin >> name >> price >> weeklyProduction[i];
            products[i] = Chocolate(name, price);
        }
        ChocolateFactory cf2 = ChocolateFactory(products, weeklyProduction, 4);

        cout << cf1 << cf2;

        cout << "< operator: " << (cf1 < cf2 ? "PASS" : "FAIL") << endl;
        cout << "> operator: " << (cf2 > cf1 ? "PASS" : "FAIL") << endl;
    } else if (testCase == 3) {
        cout << "Testing ChocolateFactory sum operator:" << endl;

        for (int i = 0; i < 5; ++i) {
            cin >> name >> price >> weeklyProduction[i];
            products[i] = Chocolate(name, price);
        }
        ChocolateFactory cf1 = ChocolateFactory(products, weeklyProduction, 5);
        for (int i = 0; i < 5; ++i) {
            cin >> name >> price >> weeklyProduction[i];
            products[i] = Chocolate(name, price);
        }
        ChocolateFactory cf2 = ChocolateFactory(products, weeklyProduction, 5);

        cout << cf1 + cf2;
    }
}
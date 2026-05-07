#include <cstring>
#include <iostream>
using namespace std;

class Ingredient {
    char *ime;
    int quantity;
    int calories;

  public:
    // Konstruktori
    Ingredient(char *name = nullptr, int qnt = 0, int kcal = 0) {
        if (name != nullptr) {
            ime = new char[strlen(name) + 1];
            strncpy(ime, name, strlen(name) + 1);
        } else
            ime = nullptr;
        calories = kcal;
        quantity = qnt;
    }

    Ingredient(const Ingredient &i) {
        ime = new char[strlen(i.ime) + 1];
        strncpy(ime, i.ime, strlen(i.ime) + 1);
        quantity = i.quantity;
        calories = i.calories;
    }

    // Metodi
    int getWholeCalories() { return quantity * calories; }

    // Operatori

    Ingredient &operator=(const Ingredient &i) {
        if (this != &i) {
            delete[] ime;
            ime = new char[strlen(i.ime) + 1];
            strncpy(ime, i.ime, strlen(i.ime) + 1);
            quantity = i.quantity;
            calories = i.calories;
        }
        return *this;
    }

    friend ostream &operator<<(ostream &os, const Ingredient &i) {
        os << i.ime << ": " << i.quantity << "g/ml";
        return os;
    }

    // Destruktor
    ~Ingredient() { delete[] ime; }
};

class Dish {
    Ingredient *ingredients;
    char *dishName;
    int ingredientCount;

  public:
    // Konstruktori
    Dish(char *name = nullptr) {
        if (name != nullptr) {
            dishName = new char[strlen(name) + 1];
            strncpy(dishName, name, strlen(name) + 1);
        } else
            dishName = new char[0];
        ingredientCount = 0;
        ingredients = new Ingredient[ingredientCount];
    }

    Dish(const Dish &d) {
        dishName = new char[strlen(d.dishName) + 1];
        strncpy(dishName, d.dishName, strlen(d.dishName) + 1);
        ingredientCount = d.ingredientCount;
        ingredients = new Ingredient[ingredientCount];
        for (int i = 0; i < ingredientCount; i++) {
            ingredients[i] = d.ingredients[i];
        }
    }

    // Metodi
    int getTotalCalories() const {
        int sumaKcal = 0;
        for (int i = 0; i < ingredientCount; i++) {
            sumaKcal += ingredients[i].getWholeCalories();
        }
        return sumaKcal;
    }

    // Operatori
    Dish &operator=(const Dish &d) {
        if (this != &d) {
            delete[] dishName;
            delete[] ingredients;
            dishName = new char[strlen(d.dishName) + 1];
            strncpy(dishName, d.dishName, strlen(d.dishName) + 1);
            ingredientCount = d.ingredientCount;
            ingredients = new Ingredient[ingredientCount];
            for (int i = 0; i < ingredientCount; i++) {
                ingredients[i] = d.ingredients[i];
            }
        }
        return *this;
    }

    Dish operator+(const Dish &d) {
        char *newName = new char[strlen(dishName) + strlen(d.dishName) + 2];
        strcpy(newName, dishName);
        strcat(newName, " ");
        strcat(newName, d.dishName);

        Dish tmp(d.dishName);
        delete[] newName;

        int newCount = ingredientCount + d.ingredientCount;
        delete[] tmp.ingredients;
        tmp.ingredients = new Ingredient[newCount];
        tmp.ingredientCount = newCount;

        for (int i = 0; i < d.ingredientCount; i++)
            tmp.ingredients[i] = d.ingredients[i];
        for (int i = 0; i < ingredientCount; i++)
            tmp.ingredients[d.ingredientCount + i] = ingredients[i];

        return tmp;
    }

    Dish &operator+=(const Ingredient &i) {
        Ingredient *tmp = new Ingredient[ingredientCount + 1];
        for (int j = 0; j < ingredientCount; j++) {
            tmp[j] = ingredients[j];
        }

        tmp[ingredientCount++] = i;
        delete[] ingredients;
        ingredients = tmp;
        return *this;
    }

    bool operator==(const Dish &d) {
        if (ingredientCount != d.ingredientCount)
            return false;
        for (int i = 0; i < ingredientCount; i++) {
            if (ingredients[i].getWholeCalories() != d.ingredients[i].getWholeCalories()) {
                return false;
            }
        }
        return true;
    }

    friend ostream &operator<<(ostream &os, const Dish &d) {
        os << "Dish: " << d.dishName << endl;
        for (int i = 0; i < d.ingredientCount; i++) {
            os << "- " << d.ingredients[i] << endl;
        }
        os << "Total Calories: " << d.getTotalCalories() << endl;

        return os;
    }

    // Destruktor
    ~Dish() {
        delete[] dishName;
        delete[] ingredients;
    }
};

int main() {

    char name[50];
    cin >> name;
    // Create Ingredients
    Ingredient tomato(name, 200, 20);
    cin >> name;
    Ingredient onion(name, 100, 30);
    cin >> name;
    Ingredient cheese(name, 50, 50);

    cin >> name;
    // Create Dishes
    Dish salad(name);
    salad += tomato;
    salad += onion;

    cin >> name;
    Dish pizza(name);
    pizza += tomato;
    pizza += cheese;

    // Test + operator
    Dish combinedDish = salad + pizza;
    cout << combinedDish;

    cout << "---------------------" << endl;

    // Test = operator
    Ingredient ingredient = tomato;
    cout << ingredient;
    cout << endl;

    cout << "---------------------" << endl;

    // Test == operator
    if (salad == pizza) {
        cout << "Salad and Pizza have the same calories." << endl;
    } else {
        cout << "Salad and Pizza do not have the same calories." << endl;
    }

    cout << "---------------------" << endl;

    // Test << operator
    cout << "Salad:" << endl;
    cout << salad;

    cout << "Pizza:" << endl;
    cout << pizza;

    return 0;
}

#include<iostream>
#include<cstring>
using namespace std;

// vasiot kod za klasite ovde

class StockRecord {
    char id[12];
    char comp[50];
    int kupovnaCena;
    double momentalnaCena;
    int brKupeniAkcii;
public:
    StockRecord(){}
    StockRecord(char *id, char* company, int price, int shares): {
        strncpy(this->id, id,strlen(id) + 1);
        strncpy(comp,company,strlen(company) + 1);
        kupovnaCena = price;
        brKupeniAkcii = shares;
    }

    void setNewPrice(double c){momentalnaCena = c;}

    double value(){}
    double profit(){}

    friend ostream operator<<(const ostream &os, const StockRecord &st) {
        os << "Company: "<<comp<<"Num Shares: "<<brKupeniAkcii<<" "<<kupovnaCena<<" "<<momentalnaCena<<" "<<profit();
        return os;
    }

};

class Client {
    char imePrezime[60];
    int id;
    StockRecord *str;
    int brObjekti;
};


// ne menuvaj vo main-ot

int main(){

    int test;
    cin >> test;

    if(test == 1){
        double price;
        cout << "=====TEST NA KLASATA StockRecord=====" << endl;
        StockRecord sr("1", "Microsoft", 60.0, 100);
        cout << "Konstruktor OK" << endl;
        cin >> price;
        sr.setNewPrice(price);
        cout << "SET metoda OK" << endl;
    }
    else if(test == 2){
        cout << "=====TEST NA METODITE I OPERATOR << OD KLASATA StockRecord=====" << endl;
        char id[12], company[50];
        double price, newPrice;
        int n, shares;
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> id;
            cin >> company;
            cin >> price;
            cin >> newPrice;
            cin >> shares;
            StockRecord sr(id, company, price, shares);
            sr.setNewPrice(newPrice);
            cout << sr.value() << endl;
            cout << sr;
        }
    }
    else if(test == 3){
        cout << "=====TEST NA KLASATA Client=====" << endl;
        char companyID[12], companyName[50], clientName[50];
        int clientID, n, shares;
        double oldPrice, newPrice;
        bool flag = true;
        cin >> clientName;
        cin >> clientID;
        cin >> n;
        Client c(clientName, clientID);
        cout << "Konstruktor OK" << endl;
        for(int i = 0; i < n; ++i){
            cin >> companyID;
            cin >> companyName;
            cin >> oldPrice;
            cin >> newPrice;
            cin >> shares;
            StockRecord sr(companyID, companyName, oldPrice, shares);
            sr.setNewPrice(newPrice);
            c += sr;
            if(flag){
                cout << "Operator += OK" << endl;
                flag = false;
            }
        }
        cout << c;
        cout << "Operator << OK" << endl;
    }
    return 0;

}
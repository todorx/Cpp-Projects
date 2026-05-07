#include <cstring>
#include <iostream>
using namespace std;

enum tip {
	pop,
	rap,
	rock
};

class Pesna {
	char* ime;
	int minuti;
	tip tiip;
public:
	Pesna() : ime(nullptr), minuti(0) {}
	Pesna(char* name, int minutes,tip type) {
		ime = new char[strlen(name) + 1];
		strcpy(ime,name);
		minuti = minutes;
		tiip = type;
	}

	tip const getTip() {return tiip;}

	void pecati() {
		//"Happy"-5min
		cout<<'"'<<ime<<'"'<<"-"<<minuti<<"min"<<endl;
	}

	Pesna (const Pesna &pes) {
		ime = new char[strlen(pes.ime) + 1];
		strcpy(ime,pes.ime);
		minuti = pes.minuti;
		tiip = pes.tiip;
	}

	Pesna &operator=(const Pesna &pes) {
		if (this != &pes) {
			delete[] ime;
			ime = new char[strlen(pes.ime) + 1];
			strcpy(ime,pes.ime);
			minuti = pes.minuti;
			tiip = pes.tiip;
		}
		return *this;
	}

	~Pesna() {
		delete[] ime;
	}
};

class CD {
	Pesna p[10];
	int brSnimeni;
	int kapacitet;
	int vremetraenje;
public:

	CD(int i){
		kapacitet = i;
		brSnimeni = 0;
		vremetraenje = 0;

	}

	Pesna getPesna(int i){return p[i];}

	int getBroj(){return brSnimeni;}

	void dodadiPesna(Pesna pes) {
		if (brSnimeni < 10 && brSnimeni <= kapacitet){p[brSnimeni++] = pes;}
	}

	void pecatiPesniPoTip(const tip t) {
		for (int i = 0; i < brSnimeni; ++i) {
			if (p[i].getTip() == t) {
				p[i].pecati();
			}
		}
	}
};

int main() {
	// se testira zadacata modularno
    int testCase;
    cin >> testCase;

	int n, minuti, kojtip;
	char ime[50];

	if(testCase == 1) {
        cout << "===== Testiranje na klasata Pesna ======" << endl;
        cin >> ime;
        cin >> minuti;
        cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
        Pesna p(ime,minuti,(tip)kojtip);
		p.pecati();
    } else if(testCase == 2) {
        cout << "===== Testiranje na klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        	for (int i=0; i<n; i++)
				(omileno.getPesna(i)).pecati();
	}
    else if(testCase == 3) {
        cout << "===== Testiranje na metodot dodadiPesna() od klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				const Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        	for (int i=0; i<omileno.getBroj(); i++)
				(omileno.getPesna(i)).pecati();
    }
    else if(testCase == 4) {
        cout << "===== Testiranje na metodot pecatiPesniPoTip() od klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        cin>>kojtip;
        omileno.pecatiPesniPoTip((tip)kojtip);

    }
    else if(testCase == 5) {
        cout << "===== Testiranje na metodot pecatiPesniPoTip() od klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        cin>>kojtip;
        omileno.pecatiPesniPoTip((tip)kojtip);

    }

return 0;
}
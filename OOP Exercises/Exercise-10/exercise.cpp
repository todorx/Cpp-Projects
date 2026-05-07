#include <iostream>
using namespace std;

class List {
    int* br;
    int brBroevi;
public:
    List(){}
    List(int* nz, int brB): brBroevi(brB) {
        br = new int[brBroevi];
        for (int i = 0; i < brBroevi; ++i) {
            br[i] = nz[i];
        }
    }

    List(const List &l):brBroevi(l.brBroevi) {
        br = new int[l.brBroevi];
        for (int i = 0; i < brBroevi; ++i) {
            br[i] = l.br[i];
        }
    }

    List &operator=(const List &l) {
        if (this != &l) {
            br = new int[l.brBroevi];
            for (int i = 0; i < brBroevi; ++i) {
                br[i] = l.br[i];
            }
        }

        return *this;
    }

    int sum() const {
        int suma = 0;
        for (int i = 0; i < brBroevi; ++i) {
            suma+= br[i];
        }
        return suma;
    }

    double average() { return sum() / brBroevi;}

    void pecati() {
        cout<<"List info: "<<brBroevi<<"sum: "<<sum()<<"average: "<<average()<<endl;
    }


    ~List() {
        delete[] br;
    }
};


class ListContainer {
    List *lista;
    int brListi;
    int brObidi;
public:
    ListContainer():brListi(0), brObidi(0) {
        lista = new List[brListi];
    }

    ListContainer(const ListContainer &lst) {
        brListi = lst.brListi;
        brObidi = lst.brObidi;
        lista = new List[brListi];
        for (int i = 0; i < brListi; i++) {
            lista[i] = lst.lista[i];
        }
    }

    ListContainer &operator=(const ListContainer &lst) {
        if (this != &lst) {
            delete[] lista;
            brListi = lst.brListi;
            brObidi = lst.brObidi;
            lista = new List[brListi];
            for (int i = 0; i < brListi; i++) {
                lista[i] = lst.lista[i];
            }
        }
        return *this;
    }

    void print() {
        if (brListi == 0){cout<<"The list is empty."<<endl;}
        else {
            for (int i = 1; i <= brListi; ++i) {
                cout<<"List number: "<< i <<" ";
                    lista[i].pecati();
                    cout<<endl;
                cout<<"sum: "<<sum()<<" average: "<<average()<<endl;
            }
        }

    }

    void addNewList(List l) {
        if (brListi != 0) {
            lista[brListi++] = l;
            brObidi++;
        }
    }

    int sum() {
        int suma = 0;
        if (brListi != 0){
            for (int i = 1; i <= brListi; ++i) {
               suma+=lista[i].sum();
            }
            return suma;
        }
    }

    double average() {
        int avg = 0;
        if (brListi != 0){
            for (int i = 1; i <= brListi; ++i) {
                avg+=lista[i].average();
            }
            return avg / brListi;
        }
    }

    ~ListContainer() {
        delete[] lista;
    }

};


int main() {

    ListContainer lc;
    int N;
    cin>>N;

    for (int i=0;i<N;i++) {
        int n;
        int niza[100];

        cin>>n;

        for (int j=0;j<n;j++){
            cin>>niza[j];

        }

        const List l=List(niza,n);

        lc.addNewList(l);
    }


    int testCase;
    cin>>testCase;

    if (testCase==1) {
        cout<<"Test case for operator ="<<endl;
        ListContainer lc1;
        lc1.print();
        cout<<lc1.sum()<<" "<<lc.sum()<<endl;
        lc1=lc;
        lc1.print();
        cout<<lc1.sum()<<" "<<lc.sum()<<endl;
        lc1.sum();
        lc1.average();

    }
    else {
        lc.print();
    }
}
#include <iostream>
#include <cstring>
using namespace std;


int main(){
    char z1,z2;

    cin>>z1>>z2;

    cin.ignore();

    char niza[80];

    while(cin.getline(niza,80) && niza[0] != '#'){

        int indexOne = 0,indexTwo = 0;
        for (int i = 0; i < strlen(niza); i++)
        {
            if(niza[i] == z1){
                indexOne = i;
                break;
            } 

        }

        for (int i = indexOne; i < strlen(niza); i++)
        {
            if(niza[i] == z2){
                indexTwo = i;
                break;
            }
        }


         for (int i = indexOne + 1; i < indexTwo; i++)
        {
            cout<<niza[i];
        }
        cout<<endl;
        
    }
}
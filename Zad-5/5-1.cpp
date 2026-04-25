#include <iostream>
using namespace std;

double rez(int *niza,int n, int brojac){
    if(brojac == n-1) return niza[brojac];


    return *(niza + brojac) + 1.0 / rez(niza, n, brojac + 1);


}


int main(){
    int n;
    cin>>n;

    int niza[n];

    for (int  i = 0; i < n; i++)
    {
        cin>>niza[i];
    }

    cout<<rez(niza, n, 0);
    
}
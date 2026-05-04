#include <iostream>
using namespace std;


int *promeniMatrica(){

    return *matrica;
}


int main(){
    int x,m,n,matrica[100][100];
    cin>>x;

    cin>>m>>n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrica[i][j];
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        int suma_red = 0;
        for (int j = 0; j < n; j++)
        {
            suma_red += matrica[i][j];
        }
        
        if(suma_red > x)
        else if(suma_red < x)
        else

    }



    

}
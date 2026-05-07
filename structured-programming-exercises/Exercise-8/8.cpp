#include <iostream>
using namespace std;

int BrojPozitivni(int niza[], int n)
{
    if (n == 0)
        return 0;

    if (*niza > 0)
        return 1 + BrojPozitivni(niza + 1, n - 1);
    else
        return BrojPozitivni(niza + 1, n - 1);
}

int main()
{

    int n, niza[100];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> niza[i];
    }

    cout << BrojPozitivni(niza, n);
}
#include <iostream>
using namespace std;

int najznacajnaCifra(int broj)
{
    int cifra = 0;
    int temp = broj;
    while (broj)
    {
        cifra = broj % 10;
        broj /= 10;
    }

    return cifra;
}

int main()
{
    int n;

    int najznacaenBroj = 0, nzC = 0;
    while (cin >> n && n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            int cf = najznacajnaCifra(b);
            if (cf > nzC)
            {
                nzC = cf;
                najznacaenBroj = b;
            }
        }
        cout << najznacaenBroj << endl;
        najznacaenBroj = 0;
        nzC = 0;
    }
}
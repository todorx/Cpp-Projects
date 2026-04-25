#include <iostream>
using namespace std;
// ВИ помош користена
double presmetka(int *niza, int n, int br)
{
    // ako сме на последен член од дропката
    if (br == n - 1)
        return niza[br];

    // aₓ + 1 / (следен дел од дропката)
    return niza[br] + 1.0 / presmetka(niza, n, br + 1);
}

int main()
{

    int n;
    cin >> n;

    int niza[100];

    for (int i = 0; i < n; i++)
    {
        cin >> niza[i];
    }

    cout << presmetka(niza, n, 0);
}
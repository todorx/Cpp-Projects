#include <iostream>
using namespace std;
// Helper function used
double presmetka(int *niza, int n, int br)
{
    // if we are at the last term of the continued fraction
    if (br == n - 1)
        return niza[br];

    // a_br + 1 / (next part of the continued fraction)
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
#include <iostream>
using namespace std;

int main()
{
    int x, m, n, matrica[100][100];
    cin >> x;

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrica[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        int suma_red = 0;
        for (int j = 0; j < n; j++)
        {
            suma_red += matrica[i][j];
        }

        if (suma_red > x)
        {
            for (int z = 0; z < n; z++)
            {
                matrica[i][z] = 1;
            }
        }
        else if (suma_red < x)
        {
            for (int z = 0; z < n; z++)
            {
                matrica[i][z] = -1;
            }
        }
        else
            for (int z = 0; z < n; z++)
            {
                matrica[i][z] = 0;
            }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
}
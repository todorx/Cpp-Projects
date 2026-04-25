#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int matrix[100][100];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    int suma = 0;
    for (int i = 0; i < n; ++i)
    {
        bool found = false;
        int sr = 0;
        for (int j = 0; j < m && !found; ++j)
        {
            if (matrix[i][j] == 1)
            {
                sr++;
                if (sr == 3)
                {
                    suma++;
                    sr = 0;
                    found = true;
                }
            }
            else if (matrix[i][j] == 0)
                sr = 0;
        }
    }

    for (int i = 0; i < m; ++i)
    {
        bool found = false;
        int sr = 0;
        for (int j = 0; j < n && !found; ++j)
        {
            if (matrix[j][i] == 1)
            {
                sr++;
                if (sr == 3)
                {
                    suma++;
                    sr = 0;
                    found = true;
                }
            }
            else if (matrix[j][i] == 0)
                sr = 0;
        }
    }

    cout << suma;
}
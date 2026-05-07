#include <iostream>
using namespace std;

int main()
{
    int n, matrix[100][100], matrixB[100][100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrixB[i][j] = matrix[i][j];
        }
    }

    for (int i = n; i < n * 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrixB[i][j] = matrix[i - n][j + n];
        }
    }

    for (int i = 0; i < n * 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }
}
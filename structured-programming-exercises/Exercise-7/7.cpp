#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void bubbleSort(int *array, int n)
{
    bool swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(array + j) > *(array + j + 1))
            {
                swap(*(array + j), *(array + j + 1));
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

void swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

int main()
{
    char niza[100];

    while (true)
    {

        cin.getline(niza, 100);

        if (niza[0] == '#')
            break;

        int numDigits = 0;
        int numArray[100], g = 0;

        for (int i = 0; i < strlen(niza); i++)
        {
            if (isdigit(niza[i]))
            {
                numArray[g++] = niza[i] - 48;
                numDigits++;
            }
        }

        cout << numDigits << ":";

        bubbleSort(numArray, numDigits);

        for (int i = 0; i < numDigits; i++)
        {
            cout << numArray[i];
        }

        cout << endl;
    }
}
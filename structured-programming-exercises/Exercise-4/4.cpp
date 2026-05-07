#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{

    char text[100];

    int max = 0;
    char maxText[100];

    int indexFD = 0;
    int indexLD = 0;

    while (cin.getline(text, 100) && text[0] != '0')
    {

        int sumNum = 0;
        for (int i = 0; i < strlen(text); i++)
        {
            if (isdigit(text[i]))
                sumNum++;
        }
        if (sumNum < 2)
            continue;

        if (strlen(text) >= max)
        {
            max = strlen(text);
            strncpy(maxText, text, strlen(text) + 1);

            for (int i = 0; i < strlen(maxText); i++)
            {
                if (isdigit(maxText[i]))
                {
                    indexFD = i;
                    break;
                }
            }

            for (int i = strlen(maxText); i > 0; i--)
            {
                if (isdigit(maxText[i]))
                {
                    indexLD = i;
                    break;
                }
            }
        }
    }

    for (int i = indexFD; i <= indexLD; i++)
    {
        cout << maxText[i];
    }
}
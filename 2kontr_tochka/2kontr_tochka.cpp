// 15 variant
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string s;

    cout << "Введите строку:\n";
    getline(cin, s);

    int m, n;

    cout << "Введите M и N: ";
    cin >> m >> n;

    string words[100];
    int count = 0;

    string temp = "";

    for (int i = 0; i <= s.length(); i++)
    {
        if (i != s.length() && s[i] != ' ')
        {
            temp += s[i];
        }
        else
        {
            if (temp != "")
            {
                words[count] = temp;
                count++;
                temp = "";
            }
        }
    }

    cout << "\nРезультат:\n";

    for (int i = 0; i < count; i++)
    {
        if (i + 1 < m || i + 1 > n)
        {
            cout << words[i] << " ";
        }
    }

    return 0;
}

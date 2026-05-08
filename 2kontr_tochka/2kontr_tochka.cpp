// 15 variant
#include <iostream>
#include <string>

using namespace std;

int main()
{
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
        if (s[i] != ' ' && i != s.length())
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

    // Вывод слов кроме диапазона M и N
    for (int i = 0; i < count; i++)
    {
        if (i + 1 < m || i + 1 > n)
        {
            cout << words[i] << " ";
        }
    }

    return 0;
}
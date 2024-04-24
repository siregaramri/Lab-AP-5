#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int batas, jumlah = 0;

    cout << "Input bilangan positif: ";
    cin >> batas;

    while (batas < 0 || batas > 1000)
    {
        cout << "Inputan invalid\n";
        cout << "Input bilangan positif (0 - 1000): ";
        cin >> batas;
    }

    for (int i = 1; i <= batas; i++)
    {
        if (i % 2 == 0)
        {
            jumlah += i*i;
        }
    }

    cout << jumlah;
    return 0;
}
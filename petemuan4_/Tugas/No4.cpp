#include <iostream>
#include <string>
using namespace std;

int main() {
    system("CLS"); 
    int n;
    string hasil = "H";

    cout << "Input nilai yang di inginkan: ";
    cin >> n;

    while (n < 0) {
        cout << "Inputan tidak valid, mohon masukkan bilangan positif: ";
        cin >> n;
    }

    for (int i = 0; i < n; ++i) {
        hasil += 'o';
    }
    hasil += "r" + string(n, 'e');
    hasil += string(n, '!');

    cout << hasil << endl;

    return 0;
}
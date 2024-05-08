#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char ulang;
    do {
    system("cls");
    
    cout << "Masukkan string S maksimal 100 karakter huruf kapital dan spasi (' ') : ";
    string input = "";
    getline(cin,input);
    cout << endl;

    lompat:
    for (auto c : input) {
        while (input.length() > 100 || (!(c >= 'A' && c <= 'Z') && !(c == ' '))) {
            cout << "Warning !!! Masukan Salah" << endl;
            cout << "Masukkan string S maksimal 100 karakter huruf kapital dan spasi (' ') : ";
            getline(cin,input);
            goto lompat;
        }
    }

    string SubstringKiri = input.substr(0, input.length() / 2);
    string SubstringKanan = input.substr(input.length() / 2);

    reverse(SubstringKiri.begin(), SubstringKiri.end());
    reverse(SubstringKanan.begin(), SubstringKanan.end());

    string StringAsli = SubstringKiri + SubstringKanan;

    cout << "Hasil String Ketika Sudah Di Perbaiki: " << StringAsli << endl;

    cout << endl;
    cout << "Apakah anda ingin mengulang (Y/T) ? : ";
    cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');
    
    return 0;
}
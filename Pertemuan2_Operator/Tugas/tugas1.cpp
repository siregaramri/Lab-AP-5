#include <iostream>
using namespace std;

int main () {
    system ("cls");

    cout << "Program Menghitung Ekspresi Logika dan Relasi\n";
    cout << "=============================================\n";
    const int i=2;
    const int k=7;
    const int l=1;
    const int c=9;
    const int u=5;
    const int s=6;

    cout << "a. 3 - I < OR K - 5 < 8 + 2 AND L + 7 >= 9 + 3\n";
    bool hasil = 3 - 1 < i || k - 5 < 8 + 2 && l + 7 >= 9 + 3;
    cout << "Hasil = " << hasil << endl;
    cout << endl;

    cout << "b. L % 3 > U AND (C / U < S OR 3 * I - K > 0)\n";
    hasil = l % 3 > u && (c / u < 5 || 3 * i - k > 0);
    cout << "Hasil = " << hasil << endl;
    cout << endl;

    cout << "c. I = 9 > K OR L + 3 < 4 * C\n";
    hasil = i - 9 > k || l + 3 < 4 * c;
    cout << "Hasil = " << hasil << endl;
    cout << endl;

    cout << "d. I OR K AND L XOR 3 SHL 2 (bitwise)\n";
    int hasil_bitwise = i | k & l ^ 3 << 2;
    cout << "Hasil = " << hasil_bitwise << endl;
    cout << endl;

    return 0;
}
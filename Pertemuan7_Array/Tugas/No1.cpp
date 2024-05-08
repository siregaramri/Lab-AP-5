#include <iostream>
#include <limits>
using namespace std;

int main() {
    system("cls");

    int besarSegitiga;
    cout << "Masukkan Besar Segitiga Pascal : ";
    cin >> besarSegitiga;
    int elemen [besarSegitiga][besarSegitiga];
    cout << endl;

    for (int i = 1; i <= besarSegitiga; i++) {
        for (int j = 0; j <= besarSegitiga-i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i) {
                elemen [i][k] = 1;
            }
            else {
                elemen [i][k] = elemen [i-1][k-1] + elemen [i-1][k];
            }
            cout << elemen [i][k] << " ";
        }
        cout << endl;
    }    

    cout << endl;
    int x,y;
    cout << "Note : ( 1 <= x,y <= 30 | x,y <= " << besarSegitiga << " )" << endl;
    cout << "Masukkan 2 (x dan y) buah bilangan (pisahkan dengan spasi) : ";
    cin >> x >> y;
 

    while (x < 1 || x > 30 || y < 1 || y > 30 || y > x || x > besarSegitiga || y > besarSegitiga)
    {
        cout << endl;
        cout << "Peringatan Note: ( 1 <= x,y <= 30 | y <= x | x,y <= " << besarSegitiga << " )" << endl;
        cout << "Masukkan 2 (x dan y) buah bilangan (pisahkan dengan spasi) : ";       
        cin >> x >> y;
    }

    cout << endl;
    cout << "Output : " << elemen [x][y] << endl;

    return 0;
}
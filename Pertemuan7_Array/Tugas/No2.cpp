#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    system("cls");
    char ulang;
    do {    
    int input[3][3], i, j;
    cout << "##==================================##" << endl;
    cout << "Program Mencari Peran Dalam Sebuah Tim" << endl;
    cout << "##==================================##" << endl;
    cout << "Masukkan Angka : " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> input[i][j];
        }
    }

    system ("cls");
    for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             cout << input[i][j] << " ";
         }
         cout << endl;
    }
    double maksEfesiensi = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (i != j && j != k && i != k) { 
                    double efesiensi = sqrt(pow(input[0][i], 2) + pow(input[1][j], 2) + pow(input[2][k], 2));
                    if (efesiensi > maksEfesiensi) {
                        maksEfesiensi = efesiensi;
                    }
                }
            }
        }
    }
    cout << fixed << setprecision(1);
    cout << "##==================================##" << endl;
    cout << "Hasil : " << maksEfesiensi << endl;
    cout << "Apakah ingin mengulang program ? (y/t) : ";
    cin >> ulang;
    cout << endl;
    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}
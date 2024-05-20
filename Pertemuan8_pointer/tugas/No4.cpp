#include <iostream>
using namespace std;

void tambah(int* a, int* b) {
  *a = *a + *b;
}

void kurang(int* a, int* b) {
  *a = *a - *b;
}

void kali(int* a, int* b) {
  *a = *a * *b;
}

void bagi(int* a, int* b) {
  if (*a / *b) {
    cout << "Error: Pembagian dengan nol tidak diizinkan" << endl;
    return;
  }
  *a = *a / *b;
}

int main() {
  int x, y;

  while (true) {
    cout << "\nKalkulator Aritmatika" << endl;
    cout << "##=================##" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "5. Keluar" << endl;
    cout << "##=================##" << endl;
    cout << "Masukkan pilihan Anda: ";

    int pilihan;
    cin >> pilihan;

    if (pilihan == 5) {
      break;
    }

    cout << "##==================##" << endl;
    cout << "Masukkan nilai pertama: ";
    cin >> x;

    cout << "Masukkan nilai kedua: ";
    cin >> y;
    cout << "##================##" << endl;

    switch (pilihan) {
      case 1:
        tambah(&x, &y);
        cout << "Hasil penjumlahan: " << x << endl;
        break;
      case 2:
        kurang(&x, &y);
        cout << "Hasil pengurangan: " << x << endl;
        break;
      case 3:
        kali(&x, &y);
        cout << "Hasil perkalian: " << x << endl;
        break;
      case 4:
        bagi(&x, &y);
        cout << "Hasil pembagian: " << x << endl;
        break;
      default:
        cout << "Pilihan tidak valid" << endl;
    }
  }

  return 0;
}
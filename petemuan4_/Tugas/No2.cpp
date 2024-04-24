#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
  string input;
  char huruf;
  char pilihan;

  do {
    cout << "Input Sebuah Kalimat: ";
    getline(cin, input);

    cout << "Input Huruf Yang Ingin Di hilangkan: ";
    cin >> huruf;

    int count = 0;
    for (int i = 0; i < input.length(); i++) {
      if (tolower(input[i]) == tolower(huruf)) {
        input.erase(i, 1);
        i--;
        count++;
      }
    }

    cout << "kalimat yang telah di ubah: " << input << endl;
    cout << "Jumlah huruf yang terhapus " << huruf << " adalah: " << count << endl;

    cout << "Apakah Anda ingin mengulang? (y/n): ";
    cin >> pilihan;
  } while (pilihan == 'y' || pilihan == 'Y');

  return 0;
}
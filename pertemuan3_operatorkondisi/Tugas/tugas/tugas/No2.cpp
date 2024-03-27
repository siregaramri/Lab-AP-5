#include <iostream>
using namespace std;

int main() {
  // Deklarasi variabel
  int bilangan, golongan, anak, gajiPokok, pajak, tambahan, gajiBersih;

  // Meminta pengguna memasukkan bilangan
  cout << "Masukkan bilangan: ";
  cin >> bilangan;

  // Menentukan apakah bilangan genap atau ganjil
  if (bilangan % 2 == 0) {
    cout << bilangan << " adalah bilangan genap." << endl;
  } else {
    cout << bilangan << " adalah bilangan ganjil." << endl;
  }

  // Meminta pengguna memasukkan golongan
  cout << "Masukkan golongan (1, 2, atau 3): ";
  cin >> golongan;

  // Menentukan gaji pokok berdasarkan golongan
  switch (golongan) {
    case 1:
      gajiPokok = 5000000;
      break;
    case 2:
      gajiPokok = 3000000;
      break;
    case 3:
      gajiPokok = 2500000;
      break;
    default:
      cout << "Golongan tidak valid." << endl;
      return 1;
  }

  // Menghitung pajak
  pajak = gajiPokok * 0.05;

  // Meminta pengguna memasukkan jumlah anak
  cout << "Masukkan jumlah anak: ";
  cin >> anak;

  // Menghitung tambahan berdasarkan jumlah anak
  if (anak <= 2) {
    tambahan = anak * 5000000;
  } else {
    tambahan = 2 * 5000000 + (anak - 2) * 750000;
  }

  // Menghitung gaji bersih
  gajiBersih = gajiPokok - pajak + tambahan;

  // Menampilkan hasil
  cout << "Gaji pokok: Rp. " << gajiPokok << endl;
  cout << "Pajak: Rp. " << pajak << endl;
  cout << "Tambahan anak: Rp. " << tambahan << endl;
  cout << "Gaji bersih: Rp. " << gajiBersih << endl;

  return 0;
}
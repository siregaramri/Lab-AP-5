#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  float beratBadan, tinggiBadan, bmi;

  // Meminta pengguna memasukkan berat badan
  cout << "Masukkan Berat badan anda (kg): ";
  cin >> beratBadan;

  // Meminta pengguna memasukkan tinggi badan
  cout << "Masukkan tinggi anda (m): ";
  cin >> tinggiBadan;

  // Menghitung BMI
  bmi = beratBadan / (tinggiBadan * tinggiBadan);

  // Menentukan kategori berat badan
  if (bmi < 18.5) {
    cout << "BMI anda: " << bmi << endl;
    cout << "Kategori berat badan: Berat badan kurang normal" << endl;
  } else if (bmi >= 18.5 && bmi < 25) {
    cout << "BMI anda: " << bmi << endl;
    cout << "Kategori berat badan: Berat badan normal" << endl;
  } else if (bmi >= 25 && bmi < 30) {
    cout << "BMI anda: " << bmi << endl;
    cout << "Kategori berat badan: Berat badan berlebih" << endl;
  } else {
    cout << "BMI anda: " << bmi << endl;
    cout << "Kategori berat badan: Obesitas" << endl;
  }

  return 0;
}
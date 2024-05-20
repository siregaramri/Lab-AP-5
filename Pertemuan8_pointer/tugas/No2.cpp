#include <iostream>
using namespace std;

int main() {
  system("cls");

  int a = 10;
  int* px = &a;

  cout << "Nilai variabel a: " << a << endl;
  cout << "Alamat variabel a: " << &a << endl;
  cout << "Nilai yang disimpan pada alamat yang ditunjuk px: " << *px << endl;

  cout << "Penjelasan:" << endl;
  cout << "  - px adalah variabel pointer yang menyimpan alamat memori dari variabel a." << endl;
  cout << "  - sedangkan *px adalah dereferensi dari px, yang berarti mengakses nilai yang disimpan pada alamat memori yang ditunjuk oleh px." << endl;

  return 0;
}
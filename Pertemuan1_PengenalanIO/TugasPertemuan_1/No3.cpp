#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float m;
  float km;

    system ("cls");

  cout <<"=========================================" << endl;
  cout <<"Program Konversi satuan meter ke Kilomter" << endl;
  cout <<"=========================================" << endl;
  cout <<"Masukkan Jarak (dalam meter): ";
  cin >> m;

  km = m / 1000;

  cout << fixed << setprecision(2) << m << " meter = " << km << " kilometer" << endl;

  return 0;
}
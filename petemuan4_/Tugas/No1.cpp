#include <iostream>

using namespace std;

int main() {
  system("cls");
  int n, i;
  
  cout << "input Jumlah Bilangan: ";
  cin >> n;
  if (n <= 0) {
    cout << "Jumlah bilangan harus lebih dari 0!" << endl;
    return 1;
    }

  int num = 1;
  for (int i = 1; i <= n; i++) {
    cout << num << " ";
    if (i % 2 == 1) {
      num += 5;
    } else {
      num += 3;
    }
  }
  
  cout << endl;

  char pilihan;
  cout << "Apakah Anda ingin mengulang? (y/n): ";
  cin >> pilihan;
  
  if (pilihan == 'y' || pilihan == 'Y') {
    main(); 
  }
  return 0;
}
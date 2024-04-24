#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
  int tahun, interval;
  char ulangi;
  
  do {
    cout << "Input Sebuah Tahun :";
    cin >> tahun;

    while (tahun <= 1000 || tahun >= 9000){
      cout << "Inputan invalid\n";
      cout << "Input Tahun yang di inginkan :";
      cin >> tahun;
    }
    
    cout << "Inputkan interval tahun yang di inginkan:";
    cin >> interval;
    while (interval <= -tahun || interval >= 9999 - tahun){
      cout << "Inputan invalid\n";
      cout << "Input interval tahun yang di inginkan:";
      cin >> interval;
    }

    if (interval < 0){
      for (int i = interval; i <= 0; i++){
        if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
          cout << tahun << " kabisat" << endl;
        } else {
          cout << tahun << " bukan kabisat" << endl;
        }
        tahun--;
      }
    } else {
      for (int i = 0; i <= interval; i++){
        if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
          cout << tahun << " kabisat" << endl;
        } else {
          cout << tahun << " bukan kabisat" << endl;
        }
        tahun++;
      }
    }

    cout << "Ingin mengulang inputan? (y/n): ";
    cin >> ulangi;
  } while (ulangi == 'y' || ulangi == 'Y');

  return 0;
}
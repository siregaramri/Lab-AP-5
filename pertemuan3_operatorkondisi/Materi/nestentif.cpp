#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int umur;

    cout << "Berapa umur kamu: ";
    cin >> umur;

    if (umur <= 0) {
        cout << "Kamu bukan manusia";
    } else {
      switch (umur){
      {
      case 1 ... 10:
        cout << "test";
        break;   
      case 11 ... 20:
      cout << "test2";
      break;
      case 21 ... 30:
      cout << "test3";
      break;

      default:
      cout << "Infut tidak benar";
        break;
      }  
    }
    
    return 0;
}
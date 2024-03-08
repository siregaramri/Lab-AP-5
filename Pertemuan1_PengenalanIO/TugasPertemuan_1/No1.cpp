#include <iostream>
using namespace std;

int main (){
  char nama[50], nim[20], kom;
  float ipk;

    system("cls");

  cout << "Masukkan nama anda :";
  cin.getline(nama, 50);
  cout << "Masukkan nim anda :";
  cin >> nim;
  cout <<"Masukkan kom anda :";
  cin >> kom;
  cout << "Masukkan ipk anda :";
  cin >> ipk;
  cout << "Halo " << nama << " dengan nim " << nim << " dari kom " << kom << " ipk kamu " << ipk ;
  return 0;
}
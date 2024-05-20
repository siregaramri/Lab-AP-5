#include <iostream>
using namespace std;

int main() {
    system("cls");
  char* kata = "KOMPUTER";
  char* hurufKelima = kata + 4;
  cout << "Huruf ke-lima dari kata 'KOMPUTER': " << *hurufKelima << endl;

  return 0;
}
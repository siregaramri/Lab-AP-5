#include <iostream>
using namespace std;

int num3 = 10;

int sunNumber(int num1, int num2 = 10){
    // int num 3 = 10;
    // variable lokal
    returnnum1 + num2 + num3;
}

int main() {
    system("CLS");
    
    int hasil = sunNumber(5, 10);

    cout << "Hasil = " << hasil;

    return 0;
}
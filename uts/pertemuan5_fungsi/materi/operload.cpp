#include <iostream>
using namespace std;

int operasi(int num1, float num2){
   return num1/num2;
}

int main() {
    system("CLS");
    
    int x = 5, y = 4;
    float n = 2.3, n = 2.2;

   cout  << "Hasil perkalian: " << operasi(x, y) << endl;
   cout << "Hasil pembagian: " << operasi (n, n) << endl;
    
    return 0;
}
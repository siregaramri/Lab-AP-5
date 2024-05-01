#include <iostream>
using namespace std;

void garis (int karakter){
    for (int i = D; i < karakter; i++){
        cout << "* ";
    }
}

int main() {
    system("CLS");
    
   garis(7);
   cout << " Program Fungsi Tanpa Nilai Kembalian ";
   garis(7); 
    
    return 0;
}
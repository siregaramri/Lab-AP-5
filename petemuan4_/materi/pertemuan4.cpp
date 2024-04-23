#include <iostream>
using namaspace std;

int maian(){
    system("CLS");
    string namasaya;
    cout << "Masukkan nama anda: ";
    cin >> namasaya;

    cout << "Nama setelah modifikasi: ";

    for (char c : namasaya) {
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'){
            cout << 'o' ;  
        }
    }
    
    return 0;
}
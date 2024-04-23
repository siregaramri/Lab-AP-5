#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int tinggi;
    string hasil;

    cout << "tinggi kamu berapa: ";
    cin >> tinggi;

    hasil = (tinggi > 200) ? "Kamu berbakat menjadi pemain basket" : "Yang bener aja";
    cout << hasil << endl;
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string kata;

   system ("cls");
   
   cout << "tuliskan 2 kata : ";
   getline (cin, kata); //dengan perintah getline() maka variabel kata akan menampung semua kata yang saya input.
   cout << "dengan getline() kata yang muncul adalah : " << kata << "\n\n";

   cout << "tuliskan 2 kata : ";
   cin >> kata; //dengan perintah cin maka variabel kata akan menganggap sebuah spasi sebagai akhir input, sehingga output akan menampilkan satu kata saja.
   cout << "dengan cin kata yang muncul adalah : "
        << kata << "\n\n";

}
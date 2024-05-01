#include <iostream>
#include <typeinfo>
using namespace std;

int Fungsi_FizzBuzz(int deret, int tipe_data)
{
    if ((deret % 3 == 0) && (deret % 5 == 0))
        {
            cout << "FizzBuzz";

        } else if (deret % 3 == 0)
            {
                cout << "Fizz";

            } else if (deret % 5 == 0)
                {
                    cout << "Buzz";

                } else
                    {
                        cout << deret;
                        tipe_data = deret;
                    }

    return tipe_data;
}


int Fungsi_Deret(int x)
{
    int tambah = 4;
    int deret = 2;
    int tipe_data;

    for (int i = 0; i < x; i++)
    {
        //pemanggilan dan penyimpanan nilai return dari Fungsi_FizzBuzz ke var tipe_data
        tipe_data = Fungsi_FizzBuzz(deret, tipe_data);

            if (i < x - 1)
            {
                cout << ", ";
            }

        deret = deret + tambah;
        tambah +=2;
    }
    
    cout << endl;
    cout << "Tipe data " << tipe_data << " adalah " << typeid(tipe_data).name();

    return 0;
}


int main() 
{
    int x;
    char ulang;

    //label perulangan program
    Ulang_Program:

        system("CLS");

    //label perulangan inputan invalid
    Ulang:

    cout << "Masukkan jumlah interval bilangan: ";
    cin >> x;

        while ((x < 3) || (x > 100))
        {
            cout << "Inputan invalid, berikan nilai dari rentang 3-100" << endl;
            goto Ulang;
        }
    
    //pemanggilan fungsi deret
    Fungsi_Deret(x);

    cout << endl << endl;
    cout << "Apakah Anda ingin mengulang program (Y/T) ? ";
    cin >> ulang;
    ulang = toupper(ulang);

    if (ulang == 'Y')
    {
        goto Ulang_Program;
    }
    
    cout << "Terima kasih telah memakai program ini " << endl;
    cout << "=======================================================" << endl;

    return 0;
}
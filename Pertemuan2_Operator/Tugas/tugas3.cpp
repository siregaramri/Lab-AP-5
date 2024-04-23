#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int r, t, s, a, b, c, ts, tp, tinggi, rusukA, rusukB, lp, vol; //r=jari-jari,t=tinggi,s=selimut,ts=tinggisegitiga,tp=tinggiprisma,lp=luaspermukaan,vol=volume
    const double phi = 3.14;
    char pilihan;

    cout << "Program hitung: \n";
    cout << "a. Kerucut\n";
    cout << "b. Limas segitiga\n";
    cout << "c. Bola\n";
    cout << "d. Prisma\n";
    cout << "Masukkan pilihan anda: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 'a':

        cout << "Masukkan jari-jari kerucut:";
        cin >> r;
        cout << "Masukkan tinggi kerucut:";
        cin >> t;
        cout << "Masukkan selimut kerucut:";
        cin >> s;

        lp = phi * r * (s + r);
        vol = (phi * r * r * t) / 3;

        cout << "\nLuas permukaan kerucut adalah: " << lp;
        cout << "\nVolume kerucut adalah: " << vol;
        break;

    case 'b':

        cout << "Masukkan sisi a segitiga alas: ";
        cin >> a;
        cout << "Masukkan sisi b segitiga alas: ";
        cin >> b;
        cout << "Masukkan sisi c segitiga alas : ";
        cin >> c;
        cout << "Masukkan tinggi segitiga alas: ";
        cin >> ts;
        cout << "Masukkan tinggi limas: ";
        cin >> tinggi;

        vol = ((a * ts) / 2.0 + tinggi) / 3.0; //1/3*luasalas+tinggilimas
        lp = ((a * ts) / 2.0 + ((a + b + c) * tinggi)) / 2.0; //luasalas+luassisitegak

        cout << "\nLuas permukaan limas segitiga adalah: " << lp;
        cout << "\nVolume limas segitiga adalah: " << vol;
        break;

    case 'c':

        cout << "Masukkan jari-jari bola:";
        cin >> r;

        lp = 4 * phi * r * r;
        vol = (4 * phi * r * r * r) / 3;

        cout << "\nLuas permukaan bola adalah: " << lp;
        cout << "\nVolume bola adalah: " << vol;
        break;

    case 'd':

        cout << "Masukkan rusuk 1 segitiga:";
        cin >> rusukA;
        cout << "Masukkan rusuk 2 segitiga:";
        cin >> rusukB;
        cout << "Masukkan tinggi alas segitiga:";
        cin >> ts;
        cout << "Masukkan tinggi prisma:";
        cin >> tinggi;

        lp = (2 * 0.5 * rusukA * ts) + (rusukA + rusukB + ts) * tinggi;
        vol = (0.5 * rusukA * ts) * tinggi;

        cout << "\nLuas permukaan prisma adalah: " << lp;
        cout << "\nVolume prisma adalah: " << vol;
        break;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    system?("cls");
    int n, i, count = 0;

    cout << "Masukkan bilangan : ";
    cin >> n;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0)
        cout << n << " adalah bilangan prima" << endl;
    else
        cout << n << " bukan bilangan prima" << endl;

    return 0;
}
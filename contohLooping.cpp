#include <iostream>
using namespace std;

int main()
{
    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    // Perulangan dengan for

    cout << "Perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    cout << "perulangan for pencacah turun" << endl;
    // perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n;
    cout << endl;
}
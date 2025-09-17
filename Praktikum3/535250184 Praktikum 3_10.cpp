// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
using namespace std;

int main()
{
    int npm1, npm2, total, jumlah, nilai;
    float rata;

    cout << "NPM: ";
    cin >> npm1;

    while (npm1 != 999)
    {
        total = 0;
        jumlah = 0;

        while (jumlah >= 0)
        {
            cout << "Ketikkan nilai: ";
            cin >> nilai;
            total = total + nilai;
            jumlah = jumlah + 1;

            cout << "NPM: ";
            cin >> npm2;

            if (npm2 != npm1)
            {
                rata = total / jumlah;
                cout << "NPM = " << npm1 << " Nilai rata - rata = " << rata << endl;
                npm1 = npm2;
                break;
            }
        }
    }
    cout << "Semua mahasiswa telah diproses" << endl;
    return 0;
}
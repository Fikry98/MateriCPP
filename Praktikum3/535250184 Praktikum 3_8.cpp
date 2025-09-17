// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int banyak, c, pr, p;
    float uts, uas, prak = 0, akhir;
    string nama;

    cout << "Ketikkan jumlah mahasiswa: ";
    cin >> banyak;

    for (c = 0; c < banyak; c++)
    {
        cout << "Ketikkan nama: ";
        cin >> nama;
        cout << "Ketikkan nilai uts: ";
        cin >> uts;
        cout << "Ketikkan nilai uas: ";
        cin >> uas;

        for (pr = 1; pr <= 4; pr++)
        {
            cout << "Ketikkan nilai praktikum ke " << pr << ": ";
            cin >> p;
            prak = prak + p;
        }

        prak = prak / 4;

        akhir = 0.2 * prak + 0.3 * uts + 0.5 * uas;

        cout << endl << "=== DATA MAHASISWA " << c + 1 << " ===" << endl << endl;
        cout << "Nama mahasiswa: " << nama << endl;
        cout << "Nilai praktikum: " << prak << endl;
        cout << "Nilai UTS: " << uts << endl;
        cout << "Nilai UAS: " << uas << endl;
        cout << "Nilai Akhir: " << akhir << endl;
        cout << "================================================" << endl << endl;
    }
    return 0;
}
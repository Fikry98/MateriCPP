// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int banyak, count;
    float uts, uas, prak, akhir;
    string nama;

    cout << "Ketikkan jumlah mahasiswa: ";
    cin >> banyak;

    for (count = 0; count < banyak; count++)
    {
        cout << "Ketikkan nama: ";
        cin >> nama;

        cout << "Ketikkan nilai praktikum: ";
        cin >> prak;

        cout << "Ketikkan nilai uts: ";
        cin >> uts;

        cout << "Ketikkan nilai uas: ";
        cin >> uas;

        akhir = (0.2 * prak) + (0.3 * uts) + (0.5 * uas);

        cout << endl << "=== DATA MAHASISWA " << count + 1 << " ===" << endl << endl;
        cout << "Nama mahasiswa: " << nama << endl;
        cout << "Nilai praktikum: " << prak << endl;
        cout << "Nilai UTS: " << uts << endl;
        cout << "Nilai UAS: " << uas << endl;
        cout << "Nilai Akhir: " << akhir << endl;
        cout << "================================================" << endl << endl;
    }
    return 0;
}
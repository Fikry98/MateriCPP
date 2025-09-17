// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int lembur, absen, bayar;
    float kriteria;

    cout << "Ketikkan nama: ";
    getline(cin,nama);
    cout << "Ketikkan jumlah jam lembur: ";
    cin>>lembur;
    cout << "Ketikkan jumlah absen: ";
    cin>>absen;

    kriteria = lembur - (2 * absen / 3);

    if (kriteria <=0.0) {
        bayar = 0;
    }
    else {
        if (kriteria <=10) {
            bayar = 100000;
        }
        else {
            if (kriteria <=20) {
                bayar = 200000;
            }
            else {
                if (kriteria <=30) {
                    bayar = 300000;
                }
                else {
                    if (kriteria <=40) {
                        bayar = 400000;
                    }
                    else {
                        bayar = 500000;
                    }
                }
            }
        }
    }
    cout << "Bonus untuk nama "<<nama<<" adalah Rp"<<bayar<<endl;

    return 0;
}
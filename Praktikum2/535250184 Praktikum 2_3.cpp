// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int lembur, absen, bonus = 100000;

    cout << "Ketikkan nama: ";
    getline(cin,nama);
    cout << "Ketikkan jumlah jam lembur: ";
    cin>>lembur;
    cout << "Ketikkan jumlah absen: ";
    cin>>absen;

    if (lembur - (2*absen/3) <=0) {
        cout << "Bonus = 0"<< endl;
    } else {
        cout << "Bonus = "<<nama<< " adalah Rp= "<<bonus<< endl;
    }

    return 0;
}
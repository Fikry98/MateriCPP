// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <string>
using namespace std;

int main() {
    int uts, praktikum, uas;
    float nilai;
    char mutu;

    cout << "Ketikkan nilai UTS: ";
    cin>>uts;
    cout << "Ketikkan nilai Praktikum: ";
    cin>>praktikum;
    cout << "Ketikkan nilai UAS: ";
    cin>>uas;

    nilai = (0.3*uts)+(0.2*praktikum)+(0.5*uas);

    if (nilai >=90) {
        mutu = 'A';
    }
    else {
        if (nilai >=80) {
            mutu = 'B';
        }
        else {
            if (nilai >=70) {
                mutu = 'C';
            }
            else {
                if (nilai >=60) {
                    mutu = 'D';
                }
                else {
                    if (nilai >=50) {
                        mutu = 'E';
                    }
                    else {
                        mutu = 'F';
                    }
                }
            }
        }
    }
    cout << "Nilai akhir = "<<nilai<<" huruf mutu = "<<mutu<<endl;

    return 0;
}
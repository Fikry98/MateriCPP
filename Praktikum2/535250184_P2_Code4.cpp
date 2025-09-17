// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
using namespace std;

int main() {
    float angka;
    char huruf_mutu;

    cout << "Ketikkan angka: ";
    cin>>angka;


    if (angka >=80)
    {
        huruf_mutu = 'A';
        cout << "selamat anda lulus dan mendapatkan hadiah sebesar Rp 1.000.000"<< endl;
    } 
    else if (angka > 70) {
        huruf_mutu = 'B';
        cout << "selamat anda lulus dan mendapatkan hadiah sebesar Rp 500.000"<< endl;
    } 
    else if (angka > 60) {
        huruf_mutu = 'C';
        cout << "selamat anda lulus"<< endl;
    } 
    else 
    {
        huruf_mutu = 'F';
        cout << "Mohon maaf anda tidak lulus"<< endl;
    }
    cout << "Huruf Mutu adalah "<<huruf_mutu<< endl;

    return 0;
}
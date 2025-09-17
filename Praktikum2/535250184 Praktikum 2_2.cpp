// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    if (a > b) {
        cout << "Untar"<< endl;
        cout << "Nilai a = "<<a<< " lebih besar dari nilai b = "<<b;
    } else {
        cout << "FTI"<< endl;
        cout << "Nilai a = "<<a<< " tidak lebih besar dari nilai b = "<<b;
    }

    return 0;
}
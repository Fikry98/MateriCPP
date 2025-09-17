// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
using namespace std;
int main()
{
    // deklarasi variabel
    int hari, upah, bayar;
    // mengetahui Lama hari bekerja
    cout << "Ketikkan lama bekerja (hari) dalam sebulan: ";
    cin >> hari;
    //mengetahui upah harian
    cout<< "Ketikkan besar upah harian: ";
    cin >> upah;
    // mengalikan upah total
    bayar = hari * upah;
    // menampilkan hasil
    cout << "Besarnya upah sebulan = Rp " << bayar << endl;
    return 0;
}
// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string nama[20];
    int a, n;
    float nilai[10], jumlah = 0, avg;
    
    cout<<"Ketikkan jumlah mahasiswa: ";
    cin>>n;

    for(a = 0; a < n; a++) {
        cout<<"Ketikkan nama mahasiswa ke "<<a<<" ";
        cin>>nama[a];
        cout<<"Ketikkan nilai mahasiswa ke "<<a<<": ";
        cin>>nilai[a];
        jumlah = jumlah + nilai[a];
    }

    avg = jumlah/n;
    cout<<"Rata-rata = "<<avg<<endl<<endl;

    cout<<"Daftar mahasiswa yang nilainya lebih tinggi dari nilai rata rata"<<endl;
    for (a = 0; a < n; a++)
    {
        if (nilai[a] > avg)
        {
            cout<<"Nama: "<<nama [a];
            cout<<" Nilai: "<<nilai [a]<<endl;
        }
    }
    
    return 0;
}
// Program untuk memasukkan nama dan nilai dari sejumlah mahasiswa kemudian mencetak nama dan
// nilai mahasiswa yang nilainya di atas nilai rata - rata.
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string nama [20];
    int a, n;
    float nilai [10], jumlah =0, avg;
    cout<<"Ketikkan jumlah mahasiswa: ";
    cin>>n;
    for(a=0; a<n; a++) {
        cout<<"Ketikkan nama mahasiswa ke "<<a<<" ";
        cin>>nama [a];
        cout<<"Ketikkan nilai mahasiswa ke "<<a<<": ";
        cin>>nilai [a];
        jumlah = jumlah + nilai[a];
    }

    //Hitung nilai rata rata kemudian tampilkan hasilnya
    avg = jumlah/n;
    cout<<"Rata-rata "<<avg<<endl<<endl;

    //Cetak nama dan nilai mahasiswa yang nilainya di atas rata rata
    cout<<"Daftar mahasiswa yang nilainya lebih tinggi dari nilai rata rata"<<endl;
    for (a=0; a<n; a++)
    {
        if (nilai [a] > avg)
        {
            cout<<"Nama: "<<nama [a];
            cout<<" Nilai: "<<nilai [a]<<endl;
        }
    }
    return 0;
}
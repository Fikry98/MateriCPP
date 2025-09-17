//Program untuk melakukan pencarian menggunakan algoritma linear search
#include<iostream>
using namespace std;

int main()
{
    float data [500];
    int N, a, x, f=0;

    cout<<"Ketikkan jumlah data:";
    cin>>N;
    cout<<"Ketikkan data "<<endl;
    for ( a=0; a<N; a++)
    {
        cout<<"Data ke "<<a+1<<":";
        cin>>data[a];
    }

    cout<<"Ketikkan nilai yang dicari: ";
    cin>>x;

    for ( a=0; a<N; a++)
    {
        if (data[a] == x)
        {
            cout<<"Nilai "<< x <<" ditemukan di indeks ke "<<a<<endl;
            f=1;
            break;
        }
    }

    if (f == 0)
    {
        cout<<"Data yang Anda cari tidak ada. "<<endl;
    }
    return 0;
}
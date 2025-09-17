// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include<iostream>

using namespace std;

int main()
{
    float data[500], max, min, avg, sum = 0;
    int N, a;
    cout<<"Ketikkan jumlah angka yang akan diurutkan: ";
    cin>>N;

    cout<<"Ketikkan data "<<endl;
    for(a = 0; a < N; a++)
    {
        cout<<"Data ke "<<a+1<<" : ";
        cin>>data[a];
        sum = sum+data[a];
    }

    max = data[0];
    min = data[0];

    for(a = 0; a < N; a++)
    {
        if(max < data[a])
        {
            max = data[a];
        }
    }

    for(a = 0; a < N; a++)
    {
        if(min > data[a])
        {
            min = data[a];
        }
    }

    avg = sum/N;

    cout<<"Nilai rata rata = "<<avg<<endl;
    cout<<"Nilai maksimum = "<<max<<endl;
    cout<<"Nilai minimum = "<<min<<endl;

    return 0;
}
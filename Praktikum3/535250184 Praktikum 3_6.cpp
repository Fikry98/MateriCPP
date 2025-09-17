// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include<iostream>
using namespace std;

int main()
{
    int n, fak = 1, i;

    cout<<"Ketikkan nilai integer: ";
    cin>>n;

    cout<<"Faktorial dari "<<n;
    for(i = n; i>= 1; i--)
    {
        fak = fak * i;
    }
    cout<<" adalah "<<fak;
    return 0;
}
// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include<iostream>
using namespace std;

int main()
{
    int n, fak = 1, pengali;

    cout<<"Ketikkan nilai integer: ";
    cin>>n;

    cout<<"Faktorial dari "<<n;
    while(n>= 1)
    {
        fak = fak*n;
        n = n - 1;
    }
    cout<<" adalah "<<fak;
    return 0;
}
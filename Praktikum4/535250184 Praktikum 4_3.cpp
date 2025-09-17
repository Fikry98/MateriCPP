// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>

using namespace std;

int main()
{
    int fak, nilai;

    int factorial(int nilai);

    cout<<"Ketikan angka: ";
    cin>>nilai;

    fak =  factorial(nilai);

    cout<<"Faktorial dari "<<nilai<<" adalah "<<fak<<endl;

    return 0;
}

int factorial(int N){
    int i, fak=1;
    
    for(i = N; i >= 1; i--){
        fak=fak*i;
    }
    return fak;
}


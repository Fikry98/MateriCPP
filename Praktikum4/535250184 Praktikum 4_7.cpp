// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>

using namespace std;

void factorial(int N){
    int i, fak=1;
    
    for(i = N; i >= 1; i--){
        fak=fak*i;
    }
    cout<<"Faktorial dari "<<N<< " adalah "<<fak<<endl;
}

int main()
{
    int fak, nilai;

    cout<<"Ketikan angka: ";
    cin>>nilai; 

    factorial(nilai);

    return 0;
}

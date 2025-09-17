// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <math.h>

using namespace std;

void hitung (float x, float y, int n){
    float h;

    if (x<y){
        h = x+1;
    } else {
        h = pow(x,n) + pow(y,n);
    }
    cout<<"Hasil perhitungan adalah "<<h<<endl;
}

int main()
{
    int n;
    float x,y;

    cout<<"Ketikan nilai x: ";
    cin>>x; 
    cout<<"Ketikan nilai y: ";
    cin>>y; 
    cout<<"Ketikan nilai n: ";
    cin>>n; 

    hitung(x,y,n);

    return 0;
}

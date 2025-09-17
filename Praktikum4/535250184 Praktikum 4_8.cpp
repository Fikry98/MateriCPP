// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <math.h>

using namespace std;

void V (float t){
    float vt;

    vt = (t+0.1)*exp(sqrt(t));
    cout<<"Tegangan kapasistor pada t = "<<t<< " detik "<<vt<<endl;
}

int main()
{
    float waktu;

    cout<<"Ketikan waktu (t): ";
    cin>>waktu; 

    V(waktu);

    return 0;
}

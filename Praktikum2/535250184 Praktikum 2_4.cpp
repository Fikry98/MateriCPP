// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
using namespace std;

int main() {
    int a,b,c,max;

    cout << "Ketikkan nilai a: ";
    cin>>a;
    cout << "Ketikkan nilai b: ";
    cin>>b;
    cout << "Ketikkan nilai c: ";
    cin>>c;


    if (a>b){
        if (a>c) {
        max = a;
        } 
        else {
            max = c;
        }
    }  
    else {
        if (b>c) {
        max = b;
        } 
        else {
            max = c;
        }
    }
    cout << "Bilangan terbesar adalah: "<<max<<endl;


    return 0;
}
// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,b,c,max;

    cout << "Ketikkan nilai a: ";
    cin>>a;
    cout << "Ketikkan nilai b: ";
    cin>>b;
    cout << "Ketikkan nilai c: ";
    cin>>c;
    
    if ((a>b) && (a>c)) {
        max = a;
    }
    if ((b>a) && (b>c)) {
        max = b;
    }
    if ((c>a) && (c>b)) {
        max = c;
    }
    cout << "Bilangan terbesar adalah: "<<max;

    return 0;
}
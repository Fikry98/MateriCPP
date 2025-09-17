// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>

using namespace std;

float average(){
    float N, rata, sum = 0, angka;
    int i;

    cout<<"Ketikkan banyaknya angka: ";
    cin>>N;

    for(i=1; i<=N; i++){
        cout<<"Ketikkan angka ke "<<i<<" : ";
        cin>>angka;
        sum = sum + angka;
    }

    rata = sum/N;

    return rata;
}

int main()
{
    float rata;

    rata = average();

    cout<<"Rata = rata = "<<rata<<endl;

    return 0;
}


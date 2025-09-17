// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>

using namespace std;

float average(float A, float B, float C){
    float rata;

    rata = (A+B+C)/3;

    return rata;
}

int main()
{
    float a,b,c, rt;

    cout<<"Ketikan nilai A: ";
    cin>>a; 
    cout<<"Ketikan nilai B: ";
    cin>>b; 
    cout<<"Ketikan nilai C: ";
    cin>>c; 

    rt = average(a, b, c);


    cout<<"Nilai rata - rata dari ("<<a<<","<<b<<","<<c<<") adalah "<<rt<<endl;

    return 0;
}


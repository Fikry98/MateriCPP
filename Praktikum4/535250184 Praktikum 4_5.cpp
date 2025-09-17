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
    float rt;

    rt = average(1, 5, 7);
    cout<<"Nilai rata - rata dari (1,5,7) adalah "<<rt<<endl;

    rt = average(80, 65, 70);
    cout<<"Nilai rata - rata dari (80,65,70) adalah "<<rt<<endl;

    return 0;
}


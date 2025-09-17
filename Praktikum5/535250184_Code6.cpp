// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    string nilai;
    int count = 0, i;
    float data[50], sum = 0, avg;
    
    ifstream myfile ("Temperatur.txt");

    if (myfile.is_open())
    {
        while (getline (myfile, nilai) )
        {
            data [count] = std::stof(nilai);
            sum = sum + data [count];
            count++;
        }
        myfile.close();
    }
    else
    {
        cout << "File tidak dapat dibuka";
    }

    avg = sum / count;
    cout<<"Temperatur rata rata adalah "<<avg<<endl<<endl;

    for(i = 0; i < count; i++)
    {
        cout<<"Temperature hari ke "<<i+1<<" = "<<data[i]<<endl;
    }

    return 0;
}
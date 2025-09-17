//Program untuk membaca data dari file kemudian menghitung rata-ratanya
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    string nilai;
    int count =0, i;
    float data [50], sum =0, avg;
    //Membaca file
    ifstream myfile ("Temperatur.txt");
    if (myfile.is_open())
    {
        while (getline (myfile, nilai) )
        {
            //Konversi string ke float
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

    for(i=0; i<count; i++)
    {
        cout<<"Temperature hari ke "<<i+1<<" = "<<data[i]<<endl;
    }

    avg = sum/count;
    cout<<"Temperatur rata rata adalah "<<avg<<endl<<endl;

    return 0;
}
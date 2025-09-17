//Program untuk memisahkan dua kata
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char input [50], katal [20], kata2[20];
    int a=0, b=0;
    cout<<"Ketikkan dua kata dipisahkan dengan spasi: ";
    cin.getline(input, sizeof(input));
    cout<<"Jumlah karakter "<<strlen (input) <<endl;
    //mengambil kata pertama
    while (input [a] != ' ' )
    {
        katal [a] = input[a];
        a=a+1;
    }
    // Baris di bawah ini penting, tetapi tidak ada di kode asli
    // katal[a] = '\0';

    //Menangani kata ke dua
    a = a+1;
    while (input [a] != '\0') // di PDF tertulis '10' yang merupakan error
    {
        kata2 [b] = input[a];
        a++;
        b++;
    }
    // Baris di bawah ini penting, tetapi tidak ada di kode asli
    // kata2[b] = '\0';
    
    cout<<"Kata pertama: "<<katal<<endl;
    cout<<"Kata ke dua: "<<kata2<<endl;
    return 0;
}
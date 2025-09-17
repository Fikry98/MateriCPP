
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char input[50], kata1[20], kata2[20];
    int a = 0, b = 0;

    cout<<"Ketikkan dua kata dipisahkan dengan spasi: ";
    cin.getline(input, sizeof(input));
    cout<<"Jumlah karakter "<<strlen(input)<<endl;

    while (input[a] != ' ' )
    {
        kata1[a] = input[a];
        a = a + 1;
    }
    
    a = a+1;
    while (input[a] != '\0')
    {
        kata2[b] = input[a];
        a++;
        b++;
    }
    
    cout<<"Kata pertama: "<<kata1<<endl;
    cout<<"Kata ke dua: "<<kata2<<endl;
    
    return 0;
}
// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nama;
	char sar;
	int lama;
	
	cout<<"Ketikkan nama: ";
	getline(cin,nama);
	cout<<"Apakah anda seorang sarjana? (Y atau T) ";
	cin>>sar;
	cout<<"Berapa lama anda sudah bekerja? (tahun) ";
	cin>>lama;
	
	if((sar == 'Y') && (lama >= 2))
	{
		cout<<"SELAMAT "<<nama;
		cout<<" permohonan kredit disetujui";
	}
	else if((sar != 'Y') && (lama >= 4))
	{
		cout<<"SELAMAT "<<nama;
		cout<<" permohonan kredit disetujui";
	}
	else
	{
		cout<<"MAAF "<<nama;
		cout<<" permohonan kredit tidak disetujui";
	}
	return 0;
}
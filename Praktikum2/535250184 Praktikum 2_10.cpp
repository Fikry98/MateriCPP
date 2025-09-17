// NAMA: FIKRY AGUSTIYAN
// NIM: 535250184
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int norek;
	char kode;
	float jumlah, saldo;
	
	cout<<"Ketikkan nomor rekening: ";
	cin>>norek;
	
	cout<<"Ketikkan jumlah saldo: ";
	cin>>saldo;
	
	cout<<"Ketikkan kode transaksi (A/S/P/T): ";
	cin>>kode;
	
	switch(kode)
	{
		case 'A':
			{
				cout<<"Ketikkan jumlah uang transaksi: ";
				cin>>jumlah;
				saldo = saldo - jumlah;
				cout<<"Ambil Uang Anda."<<endl;
				cout<<"Saldo Anda sekarang Rp "<<saldo;
				break;
			}
		case 'S':
			{
				cout<<"Ketikkan jumlah uang transaksi: ";
				cin>>jumlah;
				saldo = saldo + jumlah;
				cout<<"Saldo Anda sekarang Rp "<<saldo;
				break;
			}
		case 'P':
			{
				cout<<"Saldo Anda sekarang Rp "<<saldo;
				break;
			}
		case 'T':
			{
				cout<<"Saldo penutupan tabungan Anda Rp "<<saldo;
				break;
			}
		default:
			{
				cout<<"Anda salah menekan tombol";
			}
	}
	
	return 0;
}
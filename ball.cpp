#include <math.h>//header untuk matematika contoh pow
#define phi 3.14//untuk konstanta/nilai tetap phi
#include <fstream>
#include <conio.h>
#include <iostream>//header untuk cin dan cout

using namespace std;//wajib untuk iostrem

int main()//fungsi utama
{
    int r,volume;/*deklarasi variable dengan tipe data
    integer, r untuk jari-jari*/
    char judul;//judul
    
	system("cls");
 	
 	ifstream file;
 	file.open("judul.txt");
 		while(!file.eof())
 	{
     file.get(judul);
     cout<<judul;
 	}
 		file.close();
 		
    cout << "Masukkan Jari-jari :" ;//untuk ditampilkan
    cin >> r;//untuk input ke variable r
    volume=(4*phi*pow(r,3))/3;//rumus volume bola
    cout << "Volume Bola = " << volume;/*untuk menampilkan volume,
    \n untuk ganti baris*/
	
	getch();
    return 0;//mengembalikan nilai variable
}

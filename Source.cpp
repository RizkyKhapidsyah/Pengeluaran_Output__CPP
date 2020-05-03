#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
	int X;
	unsigned int Y;
	float Z;
	char Univ[40] = "Universitas Sumatera Utara";
	char Kota[10] = "Medan";

	X = 25000;
	Y = 5000;
	Z = 12345.678;

	system("cls");
	cout << "Tampilan Data Tanpa Diformat\n";
	cout << "Nilai X: " << X << endl;
	cout << "Nilai Y: " << Y << endl;
	cout << "Nilai Z: " << Z << endl;
	cout << "String: " << Univ << "  " << Kota << endl << endl;

	cout << "Tampilan Data Sudah Diformat\n";
	cout << "Nilai X: " << setw(10) << X << endl;
	cout << "Nilai X: " << setw(10) << Y << endl;
	cout << "Nilai X: " << setw(10) << Z << endl;
	cout << "String 1: " << setw(40) << Univ << "  " << setw(10) << Kota << endl;
	cout << "String 2: " << setw(-40) << Univ << "  " << setw(-10) << Kota << endl;

	_getch();
	return 0;
}
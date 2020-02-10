#include <iostream>

#include <iomanip>

using namespace std;
int main (){
	int nim,a,nilai[20], total,total1;
	char nama[50],namamatkul[50][100],huruf;
	
	cout << "Masukkan nama : ";
	cin.getline(nama,50);
	cout << "Nim : ";
	cin >> nim;
	cout << "Jumlah Matkul : ";
	cin >> a;
	
	for (int i=1;i<=a;i++){
		cout << "\n	Mata Kuliah " << i << endl;
		cout << "	Nama Mata Kuliah : ";
		cin.ignore();
		cin.getline (namamatkul[i],50);
		cout << "	Nilai : ";
		cin >> nilai[i];
		total = total + nilai[i];
	}
	total1=total/a;
	if (total1>=81 && total1<=100){
		huruf = 'A';
	}
	else if (total1>=61 && total1<=80){
		huruf = 'B';
	}
	else if (total1>=41 && total1<=60){
		huruf = 'C';
	}
	else if (total1>=21 && total1<=40){
		huruf = 'D';
	}
	else if (total1>=0 && total1<=21){
		huruf = 'C';
	}
	cout << "\nNama : " << nama << endl;
	cout << "Nim : " << nim << endl;
	cout << "Nilai Huruf : " << huruf << endl;
	
	cout << "\n========================================" << endl;
	cout << "|" << setw(5) << "Nama Mata Kuliah" << setw (5) << "|" << setw (4) << "Nilai" << setw(4) << "|" << endl;
	cout << "========================================" << endl;
	
	for (int i=1;i<=a;i++){
		cout << "|" <<left<< setw(22)<< namamatkul[i] << "|" << setw (4) << nilai[i] << setw(4) << "|" << endl;
			cout << "========================================" << endl;
	}
}

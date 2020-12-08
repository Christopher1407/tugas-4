#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
	string k = "-----------------------------------";
	int u_array = 5;							//u-array = ukuran array
	int nilai_maks = 0; 							//nilai maksimal
	string name; 									//nama
	string array[u_array][2];
	string kat; 									//kategori yang ada
	
	for(int i = 0; i <= u_array - 1; i++){
		cout << k << endl;
		cout << "nilai ke-" << i + 1 << endl;
		cout << "Nama  : ";
		cin >>  *(*(array+i)+0);
		cout << "Nilai : ";
		cin >>  *(*(array+i)+1);
	}
	

    cout << endl << "Kategorisasi Nilai" << endl << k << endl << endl;
    
	for(int p = 0; p <= u_array-1; p++){
		string nama = *(*(array+p)+0);
		istringstream ss(*(*(array+p)+1));
		int nilai;
		ss >> nilai;
		if(nilai >= 90 && nilai <= 100){
		kat = "A";
	}
	else if(nilai >= 80 && nilai < 90){
		kat = "B";
	}
	else if(nilai >= 70 && nilai < 80){
		kat = "C";
	}
	else if(nilai >= 60 && nilai < 70){
		kat = "D";
	}
	else if(nilai >= 50 && nilai < 60){
		kat = "E";
	}
	else if(nilai < 50){
		kat = "Tidak Lulus";
	}
	
		cout <<endl<<endl<< k << endl;
		cout << "Nama : " << nama << endl; 
		cout << "Nilai : " << nilai << endl;
		cout << "Kategori Nilai : " << kat<< endl;
		if(nilai > nilai_maks){
		nilai_maks = nilai;
		name = nama;
		}
	}
	
	cout << endl << k << endl;
	cout << "Nilai Maksimum : " << nilai_maks << endl;
	cout << "Oleh : " << name << endl << k << endl;


return 0;
}

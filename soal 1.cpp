#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int c[9];
	int *n = c;
	
	for(int a = 0; a <= 9; a++){
	cout << "masukan nilai ke :" << a+1 << " : "; cin >> *(n+a);
	}
	
	cout << "address array : ";
	for(int i = 0; i <= 9; i++)
	cout << (n+i) << " ";
	
	
	cout << endl << "nilai array adalah " << endl;
	for(int b = 0; b <= 9; b++){
		cout << "nilai ke " << b << " adalah " << *(n+b) << endl;
	}
	
	return 0;
}
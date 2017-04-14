#include <iostream>
using namespace std;

int main () {
	//KAMUS
	int i, countA;
	char TabChar [10]; // deklarasi array of character berukuran 10
	
	// mengisi character dari masukan pengguna
		for (i=0; i<10; i++) {
			cin >> TabChar[i];
		}
	// menuliskan kembali ke layar semua elemen array
		countA=0;
		for (i=0; i<10; i++) {
			cout << TabChar[i] << endl;
			if (TabChar[i]>countA) {
				countA = TabChar[i];
			}
		}
		cout << "Banyaknya A : " << countA << endl;
		return 0;
}

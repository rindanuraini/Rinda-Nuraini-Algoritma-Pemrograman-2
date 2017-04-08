
#include <iostream>
using namespace std;

long faktorial ( int x );
int main ()

{
	int y,hasil;
	cout << "Masukkan Angka Faktorial : ";
	cin >> y;
	hasil = faktorial ( y );
	cout << "Hasil Nilai Faktorial : " << y << " adalah = " << hasil << endl;
	return (0);
}
long faktorial (int x)
{
	int z = 0 , hasil = 1;
		if ( x <= 1)
	{
		return (1);
	}
	else
	{
		for(z = 1; z <= x; z++)
	{
		hasil = hasil * z;
	}
	return (hasil);
	}
}

#include <iostream>
using namespace std;

void prosesfaktorial (int x);
	int y;
	int main ()
{
	cout << "Masukkan Nilai : ";
	cin >> y;
		prosesfaktorial(y);
	}
void prosesfaktorial (int x)
{
	int z = 0;
	long long hasil = 1;
		if (x <= 1){
			cout << 1;
		}else{
			for(z = 1; z <= x; z++){
		hasil = hasil * z;
			}
		}
		cout << "hasil faktorial : " << hasil ;
}

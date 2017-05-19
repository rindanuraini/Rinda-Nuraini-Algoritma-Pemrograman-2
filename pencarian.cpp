#include <iostream>
using namespace std;

main ()
{int i;
int cari,ketemu;
int A[10];
	
	cout << "pencarian \n";
	cout << "masukkan data : \n\n";
	for (i=0;i<10;i++)
	{
		cout <<"masukkan data " << i <<endl;
		cin >> A[i];
	}
	cout<<endl;
	cout<<"data yang dicari :" ;
	cin>>cari;
	
	ketemu = 0;
	for(i=0;i<10;i++)
	{
		if (A[i]==cari)
	{
		ketemu = 1;
		cout<<"data ditemukan "<<i;
	}
	}
	if (ketemu==0){
		cout<<"data tidak ditemukan" ;
	}
	return (0);
}

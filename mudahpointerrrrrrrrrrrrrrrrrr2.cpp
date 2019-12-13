#include <iostream>
using namespace std;

int main ()
{
	int i, j, tot;
	int batas = 10 ;
	int *willyta = &tot;
	int *asmara = &j ;
		
	cout << "Masukkan angka yang akan dikalikan = " ;
	cin >> j ;
	
	for (i=1; i<=batas; i++)	{
		tot = i*j ;
		cout << i << " x " << *asmara << " = " << *willyta << endl;
	}
	
	return 0;
}


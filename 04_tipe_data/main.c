#include <iostream>
#include <limits> //import library untuk menampilkan max dan min dari variabel
using namespace std;

int main()
{
	//bilangan bulat
	int a = 1; //bilangan bulat = 4byte = 32bit
	long b = 5; //bilangan bulat panjang = 8byte = 64bit
	
	//karakter
	char c = 'a'; //character hanya 1 byte
	
	//bilangan desimal
	float d = 1.2; //bilangan desimal 4byte
	double e = 1.4; //bilangan desimal panjang 8 btye

	//boolean
	bool f = true // nilainya hanya true dan false	

	cout << e << endl; //menampilkan isi
	cout << sizeof(e) << " byte" << endl; //menampilkan ukuran dari var int (byte)
	cout << numeric_limits<double>::max() << endl; // menampilkan maksimal kapasitas
	cout << numeric_limits<double>::min() << endl; // menampilkan minimum kapasitas
	return 0;
}

#include <iostream>

using namespace std; //untuk mempermudah aja agar kita tidak perlu memakai std:: di setiap cout dan endl

int main()
{
	int a = 10; //deklarasi variabel, tapi langsung ada isinya
	cout << a << endl;
	
	//deklarasi variabel
	int b; // deklarasi variabel b
	cout << "Masukan angka : ";
	cin >> b; //cin sebagai penerima input untuk di masukan ke dalam var b
	cout << "angka yang anda masukan adalah : " << b << endl;
	return 0;
	cin.get(); // untuk pemakai windows
}

#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 6;

	int hasil;

	//penjumlahan
	hasil = a + b;
	cout << a << " + " << b << " = " << hasil << endl;
	
	//pengurangan
	hasil = a - b;
	cout << a << " - " << b << " = " << hasil << endl;

	//perkalian
	hasil = a * b;
	cout << a << " * " << b << " = " << hasil << endl;

	//pembagian
	hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

	//modulus
	hasil = a % b; //rules modulus tidak bisa int dan float harus salah satunya
    cout << a << " % " << b << " = " << hasil << endl;
	return 0;
}

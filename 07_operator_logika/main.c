#include <iostream>

using namespace std;

int main() {
	
	//operator logika
	int a = 2;
	int b = 3;
	bool hasil;

	//not
	hasil = !(a == b); //not di awali dengan tanda ! seru
	cout << hasil << endl; // 1 true dikarenakan tidak a sama dengan b hasilnya iya (true)
	cout << endl;
	//and
	cout << "===AND===\n";
	hasil = (a == 2) and (b == 3); //true and true
	cout << hasil << endl;
	hasil = (a == 2) and (b == 2); //true and false
	cout << hasil << endl;
	hasil = (a == 1) && (b == 3); //false and true
	cout << hasil << endl;
	hasil = (a == 3) && (b == 4); //true and true
	cout << hasil << endl;	

	// or akan false jika keduanya false, selebihnya true
	cout << "===OR===\n";
	hasil = (a == 2) or (b == 3); //true and true
	cout << hasil << endl;
	hasil = (a == 2) or (b == 2); //true and false
	cout << hasil << endl;
	hasil = (a == 1) || (b == 3); //false and true
	cout << hasil << endl;
	hasil = (a == 3) || (b == 4); //true and true
	cout << hasil << endl;

	return 0;
}

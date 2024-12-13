#include <iostream>

using namespace std;

int main(){
	int a = 1;
	int b = 2;
	bool hasil1,hasil2; //variabel boolean true = 1 dan false = 0
	
	//komparasi 
	//sebanding
	hasil1 = a == b; //0 = false
	//tidak sebanfding
	hasil2 = a != b; //1 = true

	//kurang dari
	hasil1 = a < b; //1 = true
	//lebih dari;
	hasil2 = a > b; //0 = false

	//kurang dari sama dengan
	hasil1 = a <= b; //1 = true
	//lebih dari samadengan
	hasil2 = a >= b; //0 = false

	cout << hasil1 << endl;
	cout << hasil2 << endl;
}

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main ()
{
	
	cout << "Skriv in en bokstav: " << endl;
	char a;
	cin >> a;
	char b = a+1;
	char c = a+2;
	cout << a << ' ' << b << ' ' << c << endl;
	
	
	return 0;
}

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main ()
{
	
	cout << "Mata in ett decimaltal: " << endl;
	float a;
	cin >> a;
	a = a+0.5;
	int b = a;
	cout << "Talet avrundat till hela tal är: " << b << endl;
	
	return 0;
}

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main ()
{
	
	cout << "Mata in tre tal: " << endl;
	float falt[3];
	cin >> falt[0] >> falt[1] >> falt[2];
	float summa = falt[0]+falt[1]+falt[2];
	float medelvarde = summa/3;
	cout << "Summan är: " << summa << ". Medelvärdet är: " << medelvarde << endl;

	return 0;
}

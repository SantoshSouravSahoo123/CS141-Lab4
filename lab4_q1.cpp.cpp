// first include in library
#include<iostream>
#include<cstring>
using namespace std;
int main ()
	{
	// Length Conversion
	float cm,m,km ;
	cout << "\n\n Convert the length in centimeter into meter and kilometer :\n" ;
	cout << " What is the length in centimeter " ;
	cin >> cm;
	m = (cm/100);
	km = (cm/100000);
	cout << " The distance in meter is: "<< m << endl;
	cout << " The distance in kilometer is: "<< km << endl;
	return 0;
	}

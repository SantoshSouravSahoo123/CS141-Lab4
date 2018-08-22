// first include the library
#include<iostream>
using namespace std;
int main ()
	{
	float C,F,temp;
//Ask the user to put the temp
	cout << "\n\n Convert the temp in F into C :\n";
	cout << " Write the temperature in Farhaneit : " ;
	cin >> F;
	C = ((5.0)/(9.0))*F - 32;
	cout << " The temp in Celsius is : "<< C << endl;
	return 0;
	}

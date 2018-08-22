// first include in library
#include<iostream>
using namespace std;
int main () 
	{
	// Ask the user to convert the temperature
	float centigrade,farh, temperature;
	cout << "\n\n Convert the temperature in centigrade into farhaneit :\n";
	cout << " What is the temperature in centigrade ? ";
	cin >> centigrade;
	farh = ((9/5)*centigrade+32);
	cout << " The temperature in farhaneit is :"<< farh << endl;
	return 0;
	}

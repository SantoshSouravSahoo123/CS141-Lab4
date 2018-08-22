//first include the library
#include<iostream>
using namespace std;
int main ()
	{
//include the variables
	int a, b, thirdangle, degrees;
	cout << "\n\n Given two angles of a triangle and obtain the third\n";
	cout << " What  is the  first angle of your triangle ? ";
	cin >> a ;
	cout << " What is the second angle of your traiangle ? ";
	cin >> b ;
	cout << " We know that the sum of all angles of a triangle is 180 degrees so : " ;
	thirdangle = 180-(a+b);
	cout << " So, the third angle is : "<< thirdangle << endl;
	return 0;
	}

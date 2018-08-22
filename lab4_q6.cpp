//first include the library
#include<iostream>
using namespace std;
int main ()
	{
//informing user about the calculator
	int b,h,area ;
	cout << "\n\n Given base and height of the triangle and find the area \n" ;
	cout << " what is the base and height of your triangle ? ";
	cin >> b;
	cin >> h;
	cout << " as the formula for area is (b*h)/2 so : " ;
	area = (b*h)/2 ;
	cout << " Thus the area of your triangle is "<< area << endl;
	return 0;
	}

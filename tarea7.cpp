#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int number, exp, digit;
	double binary;
	exp = 0;
	binary = 0;
cout << "select number: ";
	cin >> number;

	
	
	while (number / 2 != 0)
	{
		digit = number % 2;
		binary = binary + digit * pow(10.0, exp);
		exp++;
		number = number / 2;
	}
	binary = binary + number * pow(10.0, exp);
	
	
	
	cout << fixed << setprecision(0);
	cout << "binary number: " << binary << endl;
	
	
	system("pause");
}

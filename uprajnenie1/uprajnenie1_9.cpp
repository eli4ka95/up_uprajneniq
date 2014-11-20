#include <iostream>
using namespace std;
int main ()

{
	int myAge;
	int currentYear;
	int compareYear;
	
	cout << "Enter your Age:" << endl;
	cin >> myAge;

	cout << "Enter the current year:" << endl; 
	cin >> currentYear;

	cout << "Enter compare year:" << endl;
	cin >> compareYear;

	int dif;
	dif = compareYear - currentYear + myAge;

	cout << "In " << compareYear << " you will be:" << dif << endl;

	return 0;	
	
}

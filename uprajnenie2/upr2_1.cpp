#include <iostream>
using namespace std;
int main ()
{
	char userSymbol;
	
	while (true) {
	
	
	cout << "Enter uppercase letter, lowercase letter or number:";
	cin >> userSymbol;
	
	if ( userSymbol >= '0' && userSymbol <= '9' ){
	cout << "Number" << endl;
	}
	else if ( userSymbol >= 'A' && userSymbol <= 'Z' ){
		cout << "Uppercase Letter" << endl;}
	else if (userSymbol >= 'a' && userSymbol <= 'z'){
		cout << "Lowercase Letter" << endl;
		}
	
}
	return 0;
}

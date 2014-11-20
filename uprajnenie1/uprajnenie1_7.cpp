#include<iostream>
using namespace std;
int main()
{
	int item, price; 
	
	cout << "How many items are you buying? \n";
	cin >> item;
	cout <<"Enter the price of the thing you're buying: \n";
	cin >> price;
	double VAT;
	VAT = (price * item) * 0.2;
	
	cout << "You are paying " <<VAT<< " in taxes" << endl;

	system("pause");
	return 0;
}

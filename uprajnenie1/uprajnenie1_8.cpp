#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
	int coordX1; 
	int coordX2;
	int coordY1;
	int coordY2;
	
	cout << "Enter the coordinates of point A:" << endl;
	cin >> coordX1 >> coordX2;
	cout << "Enter the coordinates of a point B:" << endl;
	cin >> coordY1 >> coordY2; 
	
	double distance; 
	
	distance = sqrt (pow(coordX1 - coordY1,2) + pow(coordX2 - coordY2,2));
	
	cout << "Distance is " << DISTANCE << endl;
	
	system ("pause");
	return 0;
	
	
	
	
}

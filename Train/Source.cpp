#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
	int temp1, temp2;
	cout << "Enter type car:\t";
	cin >> temp1;
	cout << "Enter count pass:\t";
	cin >> temp2;
	Car w;
	w.setTypeCar(temp1);
	w.setPass(temp2);
	w.print();

	return 0;
}
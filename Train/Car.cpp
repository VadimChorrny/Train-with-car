#include<iostream>
#include <string>
#include "Car.h"
using namespace std;
const  size_t Car::maxPlaces[] = { 56,36,22 };

void Car::print() const
{
	cout << "Car type: " << getTypeStr() << endl;
	cout << "Count passengers: " << countPassengers << endl;
}

const char* Car::getTypeStr() const
{
	static const char* nameType[]{ "Compartment","Placcart","Sleeping","Undefined" };
	return nameType[(int)type];
}

const size_t& Car::getCountPassengers() const
{
	return countPassengers;
}

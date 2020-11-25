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

void Car::setTypeCar(const int& typeCars)
{
	// add control
	this->types = carType(typeCars);
}

void Car::setPass(const int& countPassengers)
{
	// add control
	this->countPassengers = countPassengers;
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

Car::Car()
{
	type = (carType)(rand() % ((int)carType::SLEEPING + 1));
	countPassengers = rand() % (maxPlaces[(int)type] + 1);
}

Car::Car(const int& typeCars, const size_t& countPassengers)
{
	setTypeCar(typeCars);
	setPass(countPassengers);
}

Car::~Car()
{
}

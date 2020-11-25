#pragma once
#include<iostream>
#include <string>
using namespace std;

class Car
{
public:
	enum class carType { SLEEPING, PLACCART, COMPARTMENT, UNDEFINED };

	void print() const;

	// set

	void setTypeCar(const int& typeCars);
	void setPass(const int& countPassengers);
	// get

	const char* getTypeStr() const;
	const size_t& getCountPassengers() const;

	// Ctor
	Car();
	Car(const int& typeCars, const size_t& countPassengers);
	~Car();
	
private:
	carType types;
	carType type = carType::UNDEFINED;
	size_t countPassengers = 0;
	const static size_t maxPlaces[];
	int typeCars;
	size_t passengers;

};
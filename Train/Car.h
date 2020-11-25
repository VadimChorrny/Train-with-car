#pragma once
#include<iostream>
#include <string>
using namespace std;

class Car
{
public:
	enum class carType { COMPARTMENT, PLACCART, SLEEPING, UNDEFINED };
	//void getType();
	void print() const;
	const char* getTypeStr() const;
	const size_t& getCountPassengers() const;
	Car()
	{
		type = (carType)(rand() % ((int)carType::SLEEPING + 1));
		countPassengers = rand() % (maxPlaces[(int)type] + 1);
	}
	//static int maxPlaces[] = { 56,36,22 };

	//explicit Car(carType type, size_t countPassengers);
	//Car();
	//~Car();
private:
	carType type = carType::UNDEFINED;
	size_t countPassengers = 0;
	const static size_t maxPlaces[];
};
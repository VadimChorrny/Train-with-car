#pragma once
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

class Train
{
public:
	void copy(const Train& copy);
	void print();

	//set 

	void setName(const string& name);
	void setNum(const int& num);
	void setSize(const int& size);

	//get

	const string& getName();
	const int& getNum();
	const int& getSize();

	// test
	Car maxPass(const Car arr[], const int size) const;
	Car minPass(const Car arr[], const int size) const;
	const int allPass() const;

	// Ctor

	Train();
	Train(const int& size_, const int& number, const string& name);
	Train(const Train& other);

	Train& operator= (const Train& other);

	// Dtor
	~Train();

private:
	string name;
	int num,size;
	Car* copyTrain = new Car[size];
};


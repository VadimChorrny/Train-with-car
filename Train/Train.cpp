#include "Train.h"

void Train::copy(const Train& copy)
{
	copyTrain = new Car[size];
	for (int i = 0; i < size; i++)
	{
		this->copyTrain[i] = copy.copyTrain[i];
	}
}

void Train::print()
{
	cin >> name >>num >> size;
	cout << "Name:\t" << name << endl;
	cout << "Number:\t" << num << endl;
	cout << "Count cars:\t" << size << endl;
	cout << "All Passegers: " << allPass() << endl;
	cout << "Number of car with Max passegers: " << maxPass(copyTrain, size).getTypeStr();
	cout << "Number of car with Min passegers: " << minPass(copyTrain, size).getTypeStr();
}

void Train::setName(const string& name)
{
	this->name = name;
}

void Train::setNum(const int& num)
{
	this->num = num;
}

void Train::setSize(const int& size)
{
	this->size = size;
}

const string& Train::getName()
{
	return name;
}

const int& Train::getNum()
{
	return num;
}

const int& Train::getSize()
{
	return size;
}

Car Train::maxPass(const Car arr[], const int size) const
{
	Car max;
	max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max.getCountPassengers() < arr[i].getCountPassengers())
		{
			max = arr[i];
		}
	}
	return max;
}

Car Train::minPass(const Car arr[], const int size) const
{
	Car min;
	min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min.getCountPassengers() > arr[i].getCountPassengers())
		{
			min = arr[i];
		}
	}
	return min;
}

const int Train::allPass() const
{
	int summ = 0;
	for (int i = 0; i < size; i++)
	{
		summ += copyTrain[i].getCountPassengers();
	}
	return summ;
}

Train::Train()
	:size(0)
{
	num = 0;
	name = "empty";
}

Train::Train(const int& size, const int& num, const string& name)
	:size(size)
{
	this->num = num;
	this->name = name;
}

Train::Train(const Train& copys)
	:size(copys.size)
{
	setName(copys.name);
	copy(copys);
	setNum(copys.num);
}

Train& Train::operator=(const Train& other)
{
	if (this != &other)
	{
		setName(other.name);
		copy(other);
		setNum(other.num);
	}
	return *this;
}

Train::~Train()
{
	delete[]copyTrain;
}

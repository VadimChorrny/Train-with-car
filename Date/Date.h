#pragma once
#include <iostream>
#include <string>
class Date
{
private:

	enum class MONTH_LIST { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNI, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

	// setters

	void setYear(const size_t year);
	void setMonth(const size_t month);
	void setDay(const size_t day);
		
	// getters

	size_t getYear() const;
	size_t getMonth() const;
	size_t getDay() const;

	bool is_leap_year() const;

	void print();

	Date& operator++ (int);

	void plusDay();

	Date();
	~Date();

public:
	size_t year;
	size_t month;
	size_t day;
	const size_t CURR_YEAR = 2020;
	const size_t DEF_YEAR = 2000;

};


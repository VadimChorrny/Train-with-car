// Date.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"

using namespace std;
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

void Date::setYear(const size_t year)
{
    this->year = year;
}

void Date::setMonth(const size_t month)
{
    this->month = month;
}

void Date::setDay(const size_t day)
{
    this->day = day;
}

size_t Date::getYear() const
{
    return year;
}

size_t Date::getMonth() const
{
    return month;
}

size_t Date::getDay() const
{
    return day;
}

bool Date::is_leap_year() const
{
    return ((this->year % 4 == 0) && (this->year % 100 != 0)) || (this->year % 400 == 0);
}

void Date::print()
{
    cout << "Day:\t" << getDay() << endl;
    cout << "Month:\t" << getMonth() << endl;
    cout << "Year:\t" << getYear() << endl;
    cout << endl;
}

Date& Date::operator++(int)
{
    ++day;
    return *this;
}



void Date::plusDay()
{
    ++this->day;
}

Date::Date()
{
    setDay(day);
    setYear(year);
    setMonth(month);
    
}

Date::~Date()
{
}

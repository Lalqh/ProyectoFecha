#include "Date.h"
#include <iostream>

Date::Date(int day, int moth, int year)
{
	this -> day = day;
	this -> moth = moth;
	this -> year = year;

	
}

bool Date::checkYear()
{
	bool bis;
	if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
		bis = true;
	}
	else {
		bis = false;
	}
	return bis;
}


void Date::checkDate()
{
}

void Date::checkDay()
{
	
}

void Date::checkMoth()
{
	
}
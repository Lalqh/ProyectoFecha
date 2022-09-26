#include "Date.h"
#include <iostream>

Date::Date(int day, int moth, int year)
{
	this->day = day;
	this->moth = moth;
	this->year = year;
	checkDate();
}

void Date::leapYear(int year, bool correctInfo)
{
	if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
	}
	else {
	}
}

bool Date::checkYear(int year)
{
	bool correctInfo = false;
	if (year >= 1990 && year <= 3000 || year >= 1 && year <= 99) {
		correctInfo = true;
		checkMoth(year, correctInfo);
	}
	else {
		cout << "El año no es valido\n";
	}
	return correctInfo;
}

bool Date::checkMoth(int year, bool correctInfo)
{
	if (moth >= 1 && moth <= 12) {
		correctInfo = true;
		if (moth == 2) {
			if (day >= 1 && day <= 29) {

				leapYear(year, correctInfo);

			}
			else {
				cout << "El dia es incorrecto\n";

			}
		}
		else {
			checkDay(year, correctInfo);
		}
	}
	else {
		cout << "El mes es incorrecto\n";
	}
	return correctInfo;
}

bool Date::checkDay(int year, bool correctInfo)
{
	if (day >= 1 && day <= 31) {
		correctInfo = true;
		leapYear(year, correctInfo);

	}
	else {
		cout << "El día es incorrecto";
	}
	return correctInfo;
}


void Date::checkDate()
{
	bool itsOk = checkDay(year, checkMoth(year, checkYear(year)));
	if (itsOk == true) {
		cout << "La fecha es correcta";
	}
	else {
		cout << "La fecha es incorrecta";
	}
}
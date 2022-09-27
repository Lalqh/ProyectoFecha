#include "Date.h"
#include <iostream>

Date::Date(int day, int moth, int year)
{
	this->day = day;
	this->moth = moth;
	this->year = year;
	checkDate();
}

Date& Date::operator++()
{
	// TODO: Insertar una instrucción "return" aquí
	AddDays(1);
	return *this;
}

void Date::AddDays(int nDaysToAdd)
{
	day += nDaysToAdd;
	if (day > 31)
	{
		AddMonths(day / 31);

		day %= 31; // rollover 30th -> 1st
	}
}

void Date::AddMonths(int nMonthsToAdd)
{
	moth += nMonthsToAdd;

	if (moth > 12)
	{
		AddYears(moth / 12);

		moth %= 12; // rollover dec -> jan
	}
}

void Date::AddYears(int m_nYearsToAdd)
{
	year += m_nYearsToAdd;
}

void Date::showDate()
{
	cout << "La fecha es: "<<day<<"/"<<moth<<"/"<<year<<"\n";
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
	if (correctInfo == true) {
		if (moth >= 1 && moth <= 12) {
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
			correctInfo = false;
		}
	}
	return correctInfo;
}

bool Date::checkDay(int year, bool correctInfo)
{
	if (correctInfo == true) {
		if (day >= 1 && day <= 31) {
			correctInfo = true;
			leapYear(year, correctInfo);

		}
		else {
			correctInfo = false;
		}
	}
	return correctInfo;
}


bool Date::checkDate()
{
	bool itsOk = checkDay(year, checkMoth(year, checkYear(year)));
	if (itsOk == true) {
		cout << "La fecha es correcta\n";
	}
	else {
		cout << "La fecha es incorrecta\n";
		itsOk = false;
	}
	return itsOk;
}
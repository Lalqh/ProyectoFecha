#pragma once
#include <string>
#include <iostream>

using namespace std;

class Date
{
private:
	int day, moth, year;

public:
	// Constructor
	Date(int day, int moth, int year);

	// Metodos para la validacion de la fecha
	void leapYear(int year, bool correctInfo);
	bool checkYear(int year);
	bool checkDay(int year, bool correctInfo);
	bool checkMoth(int year, bool correctInfo);
	bool checkDate();

	// Metodos que incremetan la fecha 
	Date& operator ++ ();
	void AddDays(int nDaysToAdd);
	void AddMonths(int nMonthsToAdd);
	void AddYears(int m_nYearsToAdd);

	// Metodo para mostrar la fecha
	void showDate();
};


#pragma once
#include <string>

using namespace std;

class Date
{
private:
	int day, moth, year;

public:
	Date(int day, int moth, int year);
	void leapYear(int year, bool correctInfo);
	bool checkYear(int year);
	bool checkDay(int year, bool correctInfo);
	bool checkMoth(int year, bool correctInfo);
	void checkDate();
};


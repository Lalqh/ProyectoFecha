#pragma once
#include <string>

using namespace std;

class Date
{
private:
	int day, moth, year;

public:
	Date(int day, int moth, int year);
	void checkDate();
	void checkDay();
	void checkMoth();
	bool checkYear();
};


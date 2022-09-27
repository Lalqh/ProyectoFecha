#include <iostream>
#include <sstream>
#include "Date.h"

using namespace std;


int main()
{
	string date, read;
	char op;
	int day{}, moth{}, year{}, contador=0;

	cout << "Ingresa la fecha: ";
	cin >> date;

	stringstream split(date);             

	while (getline(split, read, '/'))
	{
		if (contador == 0) { // para guadar el dia
			day = stoi(read);
			contador++;
		}
		else if (contador == 1) {
			moth = stoi(read);
			contador++;
		}
		else if (contador == 2) {
			year = stoi(read);
		}
	}
	Date fecha(day, moth, year);

	if (fecha.checkDate() == true) {
		do
		{
			cout << "Desea aumentar su fecha en un dia?: (S/N)";
			cin >> op;
			++fecha;
			fecha.showDate();
		} while (op != 'S' || op != 's');
	}
}
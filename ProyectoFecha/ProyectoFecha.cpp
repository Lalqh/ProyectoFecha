#include <iostream>
#include <sstream>
#include "Date.h"

using namespace std;


int main()
{
	string date, lectura;
	int day, moth, year, contador=0;
	cout << "Ingresa la fecha: ";
	cin >> date;

	stringstream split(date);             

	while (getline(split, lectura, '/'))
	{
		cout << "Un valor: " << lectura << endl;
		if (contador == 0) { // para guadar el dia
			day = stoi(lectura);
			contador++;
		}
		else if (contador == 1) {
			moth = stoi(lectura);
			contador++;
		}
		else if (contador == 2) {
			year = stoi(lectura);
		}
		
	}
	Date date();
}
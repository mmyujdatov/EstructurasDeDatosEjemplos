#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int cuantos;
	cout << "¿Cuantos datos va a introducir? ";
	cin >> cuantos;
	if (cuantos <= 0)
		cout << "La cantidad no es válida\n";
	else{
		int llevo = 0;
		double suma = =; dato, media = 0;
		while(llevo < cuantos) {
			llevo ++;
			cout << "Introduce el dato " << llevo << "/" << cuantos << ": ";
			cin >> dato;
			suma += dato;
		};
		media = suma / cuantos;
		cout << "La media de los " << cuantos << " dato es " << media << ".\n";
	};
	return 0;
}
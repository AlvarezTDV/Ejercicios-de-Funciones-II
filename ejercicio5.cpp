#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices( double a, double b, double c, double &raiz1, double &raiz2, bool &esReal ) {
	double discriminante = pow( b, 2 ) - 4 * a * c;
	if ( discriminante >= 0 ) {
		esReal = true;
		raiz1 = ( - b - sqrt( discriminante ) ) / ( 2 * a );
		raiz2 = ( - b + sqrt( discriminante ) ) / ( 2 * a );
	} else {
		esReal = false;
		double parteReal = - b / ( 2 * a );
		double parteImaginaria = sqrt( - discriminante ) / ( 2 * a );
		raiz1 = parteReal;
		raiz2 = parteImaginaria;
	}
}

int main() {
	double a, b, c, raiz1, raiz2;
	bool esReal;
	cout << "Ingrese el coeficiente a: ";
	cin >> a;
	cout << "Ingrese el coeficiente b: ";
	cin >> b;
	cout << "Ingrese el coeficiente c: ";
	cin >> c;
	calcularRaices ( a, b, c, raiz1, raiz2, esReal );
	if ( esReal == true ) {
		cout << "Son raices reales" << endl;
		cout << "Las raices son: " << endl;
		cout << "Primera raiz: " << raiz1 << endl;
		cout << "Segunda raiz: " << raiz2 << endl;
	} else {
		cout << "Son raices complejas" << endl;
		cout << "Parte real: " << raiz1 << endl;
		cout << "Parte imaginaria: " << raiz2 << "i" << endl;
		cout << "Las raices son: " << endl;
		cout << "Primera raiz: " << raiz1 << " + " << raiz2 << "i" << endl;
		cout << "Segunda raiz: " << raiz1 << " - " << raiz2 << "i" << endl;
	}
}

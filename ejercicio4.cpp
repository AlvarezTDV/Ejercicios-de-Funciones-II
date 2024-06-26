#include <iostream>
#include <cmath>
using namespace std;

double primeraRaiz( double a, double b, double c ) {
	double d = pow( b, 2 ) - 4 * a * c;
	double r = ( - b - sqrt( d ) ) / ( 2 * a );
	return r;
}

double segundaRaiz( double a, double b, double c ) {
	double d = pow( b, 2 ) - 4 * a * c;
	double r = ( - b + sqrt( d ) ) / ( 2 * a );
	return r;
}

double hallarDiscriminante( double a, double b, double c ) {
	double d = pow( b, 2 ) - 4 * a * c;
	return d;
}

int main() {
	double c1, c2, c3, raiz1, raiz2, discriminante, parteReal, parteImaginaria;
	cout << "Ingrese el coeficiente a: ";
	cin >> c1;
	cout << "Ingrese el coeficiente b: ";
	cin >> c2;
	cout << "Ingrese el coeficiente c: ";
	cin >> c3;
	discriminante = hallarDiscriminante( c1, c2, c3 );
	if ( discriminante > 0 ) {
		cout << "Tiene dos raices reales distintas" << endl;
		raiz1 = primeraRaiz ( c1, c2, c3 );
		raiz2 = segundaRaiz ( c1, c2, c3 );
		cout << "Las raices son: " << endl;
		cout << "Primera raiz: " << raiz1 << endl;
		cout << "Segunda raiz: " << raiz2 << endl;
	} else if ( discriminante == 0 ) {
		cout << "Tiene dos raices reales dobles" << endl;
		raiz1 = primeraRaiz ( c1, c2, c3 );
		raiz2 = segundaRaiz ( c1, c2, c3 );
		cout << "Las raices son: " << endl;
		cout << "Primera raiz: " << raiz1 << endl;
		cout << "Segunda raiz: " << raiz2 << endl;
	} else {
		cout << "Tiene dos raices complejas" << endl;
		parteReal = - c2 / ( 2 * c1 );
		parteImaginaria = sqrt( - discriminante ) / ( 2 * c1 );
		cout << "Las raices son: " << endl;
		cout << "Primera raiz: " << parteReal << " + " << parteImaginaria << "i" << endl;
		cout << "Segunda raiz: " << parteReal << " - " << parteImaginaria << "i" << endl;
	}
	return 0;
}

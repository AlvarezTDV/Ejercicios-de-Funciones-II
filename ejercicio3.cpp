#include <iostream>
#include <cmath>
using namespace std;

double pitagoras( double x, double y ) {
	double z = sqrt( pow( x, 2 ) + pow( y, 2 ) );
	return z;
}

int main() {
	double cateto1, cateto2, hipotenusa;
	cout << "Ingrese el valor del primer cateto: ";
	cin >> cateto1;
	cout << "Ingrese el valor del segundo cateto: ";
	cin >> cateto2;
	hipotenusa = pitagoras ( cateto1, cateto2 );
	cout << "La hipotenusa es: " << hipotenusa;
	return 0;
}

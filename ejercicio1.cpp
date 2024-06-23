#include <iostream>
#include <cmath>
using namespace std;

//Funcion para hallar el Area del circulo
double areaCirculo( double x ) {
	double y = M_PI * pow( x, 2 );
	return y;
}

int main() {
	double radio, area;
	cout << "Ingrese el radio del circulo para calcular el area: ";
	cin >> radio;
	if ( radio >= 0 ) {
		area = areaCirculo( radio );
		cout << "El area del circulo es:" << area;
	} else {
		cout << "ERROR: Ingreso un numero invalido";
	}
	return 0;
}

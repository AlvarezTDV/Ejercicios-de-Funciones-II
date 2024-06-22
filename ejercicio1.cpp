#include <iostream>
#include <cmath>
using namespace std;

//Función para hallar el área del circulo
double areaCirculo( double x ) {
	double y = M_PI * pow( x, 2 );
	return y;
}

int main() {
	double radio, area;
	cout << "Ingrese el radio del circulo para calcular el area: ";
	cin >> radio;
	area = areaCirculo( radio );
	cout << "El area del circulo es:" << area;
	return 0;
}

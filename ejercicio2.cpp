#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarNumAleatorio( int x ) {
	int y = rand() % ( x + 1 );
	return y;
}

int main() {
	int numero, numMax, numAleatorio;
	srand( time( 0 ) );
	cout << "Ingrese la cantidad de numeros que desea generar: ";
	cin >> numero;
	cout << "Ingrese el valor maximo de los numeros aleatorios: ";
	cin >> numMax;
	for ( int i = 1; i <= numero; i++ ) {
		numAleatorio = generarNumAleatorio( numMax );
		cout << numAleatorio << endl;
	}
	return 0;
}

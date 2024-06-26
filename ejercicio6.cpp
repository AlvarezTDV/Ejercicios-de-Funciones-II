#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ronda( int jugador1, int jugador2, int &ganaJugador, int &ganaComputadora ){
	if ( jugador1 == 1 && jugador2 == 1 ) {
		cout << "Tu: Piedra" << endl;
		cout << "Computadora: Piedra" << endl; 
		cout << "Empate" << endl;
	} else if ( jugador1 == 1 && jugador2 == 2 ) {
		cout << "Tu: Piedra" << endl;
		cout << "Computadora: Papel" << endl; 
		cout << "Pierdes" << endl;
		ganaComputadora++;
	} else if ( jugador1 == 1 && jugador2 == 3 ) {
		cout << "Tu: Piedra" << endl;
		cout << "Computadora: Tijeras" << endl; 
		cout << "Ganas" << endl;
		ganaJugador++;
	} else if ( jugador1 == 2 && jugador2 == 1 ) {
		cout << "Tu: Papel" << endl;
		cout << "Computadora: Piedra" << endl; 
		cout << "Ganas" << endl;
		ganaJugador++;
	} else if ( jugador1 == 2 && jugador2 == 2 ) {
		cout << "Tu: Papel" << endl;
		cout << "Computadora: Papel" << endl; 
		cout << "Empate" << endl;
	} else if ( jugador1 == 2 && jugador2 == 3 ) {
		cout << "Tu: Papel" << endl;
		cout << "Computadora: Tijeras" << endl; 
		cout << "Pierdes" << endl;
		ganaComputadora++;
	} else if ( jugador1 == 3 && jugador2 == 1 ) {
		cout << "Tu: Tijeras" << endl;
		cout << "Computadora: Piedra" << endl; 
		cout << "Pierdes" << endl;
		ganaComputadora++;
	} else if ( jugador1 == 3 && jugador2 == 2 ) {
		cout << "Tu: Tijeras" << endl;
		cout << "Computadora: Papel" << endl; 
		cout << "Ganas" << endl;
		ganaJugador++;
	} else if ( jugador1 == 3 && jugador2 == 3 ) {
		cout << "Tu: Tijeras" << endl;
		cout << "Computadora: Tijeras" << endl; 
		cout << "Empate" << endl;
	} else {
		cout << "Ingreso un numero invalido" << endl;
	}
}

int main() {
	int eleccion, computadora, ganaJugador, ganaComputadora;
	srand( time( 0 ) );
	ganaJugador = 0;
	ganaComputadora = 0;
	cout << "Juego piedra, papel y tijeras" << endl;
	do {
		cout << "1. Piedra" << endl;
		cout << "2. Papel" << endl;
		cout << "3. Tijeras" << endl;
		cout << "Escoga una opcion: ";
		cin >> eleccion;
		computadora = rand() % 3 + 1;
		ronda ( eleccion, computadora, ganaJugador, ganaComputadora );
		cout << "Contador: " << endl;
		cout << "Tu: " << ganaJugador << " || Computadora: " << ganaComputadora << endl << endl;
	} while ( ganaJugador < 3 && ganaComputadora < 3 );
	cout << "El juego termino" << endl;
	if ( ganaJugador > ganaComputadora ) {
		cout << "Ganaste el juego" << endl;
		cout << "Felicidades :D" << endl;
	} else {
		cout << "Gano la computadora" << endl;
		cout << "Vuelve a intentarlo :(" << endl;
	}
	return 0;
}

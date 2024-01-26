#include <iostream>
#include <cstdlib>   // Necesario para la función rand()
#include <ctime>     // Necesario para la función time()

using namespace std;

// Función para generar un número aleatorio entre 0 y 500
int generarNumeroAleatorio() {
	return rand() % 501;  // Genera un número entre 0 y 500
}

// Función para generar un número real aleatorio
double generarNumeroRealAleatorio() {
	return static_cast<double>(rand()) / RAND_MAX;  // Genera un número real entre 0 y 1
}

// Función para verificar si un número es primo
bool esPrimo(int numero) {
	if (numero <= 1) {
		return false;
	}
	for (int i = 2; i * i <= numero; i++) {
		if (numero % i == 0) {
			return false;
		}
	}
	return true;
}

// Función para generar N números primos
void generarNumerosPrimos(int N) {
	cout << "Los primeros " << N << " números primos son: ";
	int contador = 0;
	int numero = 2;
	while (contador < N) {
		if (esPrimo(numero)) {
			cout << numero << " ";
			contador++;
		}
		numero++;
	}
	cout << endl;
}

int main() {
	srand(time(0));  // Inicializar la semilla para números aleatorios
	
	char opcion;
	do {
		cout << "(1) Generar número aleatorio entre 0-500" << endl;
		cout << "(2) Generar número aleatorio real" << endl;
		cout << "(3) Generar N números primos" << endl;
		cout << "(s/S) Salir" << endl;
		
		cout << "Ingrese su opción: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			cout << "Número aleatorio entre 0-500: " << generarNumeroAleatorio() << endl;
			break;
		case '2':
			cout << "Número aleatorio real: " << generarNumeroRealAleatorio() << endl;
			break;
		case '3':
			int N;
			cout << "Ingrese la cantidad de números primos a generar: ";
			cin >> N;
			generarNumerosPrimos(N);
			break;
		case 's':
		case 'S':
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opción no válida. Por favor, ingrese nuevamente." << endl;
		}
		
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}

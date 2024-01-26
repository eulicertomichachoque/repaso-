#include <iostream>
#include <cstdlib>   // Necesario para la funci�n rand()
#include <ctime>     // Necesario para la funci�n time()

using namespace std;

// Funci�n para generar un n�mero aleatorio entre 0 y 500
int generarNumeroAleatorio() {
	return rand() % 501;  // Genera un n�mero entre 0 y 500
}

// Funci�n para generar un n�mero real aleatorio
double generarNumeroRealAleatorio() {
	return static_cast<double>(rand()) / RAND_MAX;  // Genera un n�mero real entre 0 y 1
}

// Funci�n para verificar si un n�mero es primo
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

// Funci�n para generar N n�meros primos
void generarNumerosPrimos(int N) {
	cout << "Los primeros " << N << " n�meros primos son: ";
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
	srand(time(0));  // Inicializar la semilla para n�meros aleatorios
	
	char opcion;
	do {
		cout << "(1) Generar n�mero aleatorio entre 0-500" << endl;
		cout << "(2) Generar n�mero aleatorio real" << endl;
		cout << "(3) Generar N n�meros primos" << endl;
		cout << "(s/S) Salir" << endl;
		
		cout << "Ingrese su opci�n: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			cout << "N�mero aleatorio entre 0-500: " << generarNumeroAleatorio() << endl;
			break;
		case '2':
			cout << "N�mero aleatorio real: " << generarNumeroRealAleatorio() << endl;
			break;
		case '3':
			int N;
			cout << "Ingrese la cantidad de n�meros primos a generar: ";
			cin >> N;
			generarNumerosPrimos(N);
			break;
		case 's':
		case 'S':
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opci�n no v�lida. Por favor, ingrese nuevamente." << endl;
		}
		
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}

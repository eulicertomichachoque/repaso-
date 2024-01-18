#include <iostream>
#include <cstdlib>  // Necesario para la función rand()
#include <ctime>    // Necesario para inicializar la semilla de números aleatorios con la función time()

using namespace std;

int main() {
	// Inicializar la semilla de números aleatorios con la hora actual
	srand(time(0));
	
	// Por favor ingresar  ingresar la cantidad de números aleatorios a generar
	int N;
	cout << "Ingrese la cantidad de numeros aleatorios : ";
	cin >> N;
	
	// Generar e imprimir los N números aleatorios
	cout << "Numeros aleatorios generados: ";
	for (int i = 0; i < N; ++i) {
		int numeroAleatorio = rand() % 100;  // Genera un número aleatorio entre 0 y 99
		cout << numeroAleatorio << " ";
	}
	
	cout << endl;
	
	return 0;
}

#include <iostream>
#include <cstdlib>  // Necesario para la funci�n rand()
#include <ctime>    // Necesario para inicializar la semilla de n�meros aleatorios con la funci�n time()

using namespace std;

int main() {
	// Inicializar la semilla de n�meros aleatorios con la hora actual
	srand(time(0));
	
	// Por favor ingresar  ingresar la cantidad de n�meros aleatorios a generar
	int N;
	cout << "Ingrese la cantidad de numeros aleatorios : ";
	cin >> N;
	
	// Generar e imprimir los N n�meros aleatorios
	cout << "Numeros aleatorios generados: ";
	for (int i = 0; i < N; ++i) {
		int numeroAleatorio = rand() % 100;  // Genera un n�mero aleatorio entre 0 y 99
		cout << numeroAleatorio << " ";
	}
	
	cout << endl;
	
	return 0;
}

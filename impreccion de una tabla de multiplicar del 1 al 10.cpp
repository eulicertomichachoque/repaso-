#include <iostream>

int main() {
	// Declarar la variable para almacenar el n�mero ingresado por el usuario
	int numero;
	
	// Solicitar al usuario que ingrese un n�mero
	std::cout << "Ingrese un numero: ";
	std::cin >> numero;
	
	// Imprimir la tabla de multiplicar utilizando un bucle for
	std::cout << "Tabla de multiplicar de " << numero << ":\n";
	for (int i = 1; i <= 10; ++i) {
		std::cout << numero << " x " << i << " = " << (numero * i) << "\n";
	}
	
	return 0;
}

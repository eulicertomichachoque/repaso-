#include <iostream>

// Prototipos de funciones
void ingresarNumeros(int &num1, int &num2);
int sumarNumeros(const int &num1, const int &num2);
bool esPrimo(const int &num);

int main() {
	int opcion;
	int numero1, numero2, suma;
	
	do {
		// Menú
		std::cout << "MENU:\n";
		std::cout << "1. Ingresar numeros\n";
		std::cout << "2. Sumar numeros\n";
		std::cout << "3. Verificar si es un numero primo\n";
		std::cout << "4. Salir\n";
		std::cout << "Seleccione una opcion: ";
		std::cin >> opcion;
		
		switch (opcion) {
		case 1:
			ingresarNumeros(numero1, numero2);
			break;
		case 2:
			suma = sumarNumeros(numero1, numero2);
			std::cout << "La suma de los numeros es: " << suma << "\n";
			break;
		case 3:
			if (esPrimo(numero1)) {
				std::cout << numero1 << " es un numero primo.\n";
			} else {
				std::cout << numero1 << " no es un numero primo.\n";
			}
			break;
		case 4:
			std::cout << "Saliendo del programa.\n";
			break;
		default:
			std::cout << "Opcion invalida. Por favor, seleccione nuevamente.\n";
		}
	} while (opcion != 4);
	
	return 0;
}

// Función para ingresar dos números
void ingresarNumeros(int &num1, int &num2) {
	std::cout << "Ingrese el primer numero: ";
	std::cin >> num1;
	std::cout << "Ingrese el segundo numero: ";
	std::cin >> num2;
}

// Función para sumar dos números
int sumarNumeros(const int &num1, const int &num2) {
	return num1 + num2;
}

// Función para verificar si un número es primo
bool esPrimo(const int &num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i <= num / 2; ++i) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

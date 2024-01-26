#include <iostream>

// Variables globales
float numero1, numero2;

// Declaración de funciones
void mostrarMenuPrincipal();
void realizarOperacionNumeros();
void concatenarCadenas();
void mostrarSubMenuOperacionesNumeros();

int main() {
	char opcion;
	
	//BUCLE PRINCIPAL DEL PROGRAMA 
	do {
		mostrarMenuPrincipal();
		std::cout << "Ingrese su elección: ";
		std::cin >> opcion;
		
		//REALIZAR ACCCIONES SEGUN LA OPCION SELLECIONADA 
		switch (opcion) {
		case '1':
			realizarOperacionNumeros();
			break;
		case '2':
			concatenarCadenas();
			break;
		case 's':
		case 'S':
			std::cout << "Saliendo del programa. ¡Hasta luego!" << std::endl;
			break;
		default:
			std::cout << "Opción no válida. Inténtelo de nuevo." << std::endl;
		}
		
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}
// FUNCION PARA MOSTRAR EN PANTALLA EL MENU PRINCIPAL.
void mostrarMenuPrincipal() {
	std::cout << "\nMENU PRINCIPAL" << std::endl;
	std::cout << "(1) -- Operaciones con Números" << std::endl;
	std::cout << "(2) -- Concatenar 2 cadenas" << std::endl;
	std::cout << "(s/S) -- Salir" << std::endl;
}

// FUNCION DONDE EL USUARIO PUEDE REALIZAR LAS OPERACIONES CON NUMERO.
void realizarOperacionNumeros() {
	char opcion;
	
	do {
		mostrarSubMenuOperacionesNumeros();
		std::cout << "Ingrese su elección: ";
		std::cin >> opcion;
		
		//BUCLE PARRA LA REALIZACION DE LOS DEL SUB MENU
		//DE OPERACIONES CON NUMEROS.
		switch (opcion) {
		case '1':
			std::cout << "Ingrese el primer número: ";
			std::cin >> numero1;
			std::cout << "Ingrese el segundo número: ";
			std::cin >> numero2;
			std::cout << "La suma es: " << (numero1 + numero2) << std::endl;
			break;
		case '2':
			//INGRESAR LA ACCION SELECCIONADO POR EL USUARIO.
			std::cout << "Ingrese el primer número: ";
			std::cin >> numero1;
			std::cout << "Ingrese el segundo número: ";
			std::cin >> numero2;
			if (numero2 != 0) {
				std::cout << "La división es: " << (numero1 / numero2) << std::endl;
			} else {
				std::cout << "No se puede dividir por cero." << std::endl;
			}
			break;
		case 'm':
		case 'M':
			std::cout << "Volviendo al Menu Principal." << std::endl;
			break;
		default:
			std::cout << "Opción no válida. Inténtelo de nuevo." << std::endl;
		}
		
	} while (opcion != 'm' && opcion != 'M');
}

//FUNCION PARA MOSTRAR LAS CADENAS SELECCIONADAS.
void concatenarCadenas() {
	std::string cadena1, cadena2;
	
	std::cout << "Ingrese la primera cadena: ";
	std::cin.ignore(); // Limpiar el buffer del teclado
	std::getline(std::cin, cadena1);
	
	std::cout << "Ingrese la segunda cadena: ";
	std::getline(std::cin, cadena2);
	
	std::string concatenacion = cadena1 + cadena2;
	std::cout << "La concatenación de las cadenas es: " << concatenacion << std::endl;
}

//MOSTRAR LAS OPERACIONES DADAS POR EL USUARIO
//EN EL SUBMENU.
void mostrarSubMenuOperacionesNumeros() {
	std::cout << "\nSUBMENU OP NUMEROS" << std::endl;
	std::cout << "1) - Suma de 2 números" << std::endl;
	std::cout << "2) - División de 2 números" << std::endl;
	std::cout << "(m/M) - Volver al Menu Principal" << std::endl;
}

#include <iostream>
#include <cctype>

using namespace std;

// Variables globales para almacenar el nombre completo y las partes separadas
string nombreCompleto, nombre, apePat, apeMat;

// Función para separar el nombre completo en nombre, apellido paterno y apellido materno
void separarYConvertirMayusculas() {
	int pini = 0;
	int pfinal = nombreCompleto.find(" ", pini);
	
	// Obtener el nombre y convertir la primera letra a mayúscula
	nombre = nombreCompleto.substr(pini, pfinal);
	nombre[0] = toupper(nombre[0]);
	
	// Obtener el apellido paterno y convertir la primera letra a mayúscula
	pini = pfinal + 1;
	pfinal = nombreCompleto.find(" ", pini);
	apePat = nombreCompleto.substr(pini, pfinal - pini);
	apePat[0] = toupper(apePat[0]);
	
	// Obtener el apellido materno y convertir la primera letra a mayúscula
	apeMat = nombreCompleto.substr(pfinal + 1);
	apeMat[0] = toupper(apeMat[0]);
}

// Función para sumar una cadena de números separados por '+'
void sumarCadena() {
	string cadena;
	cout << "Ingrese la cadena de números separados por '+': ";
	cin.ignore();
	getline(cin, cadena);
	
	int resultado = 0;
	size_t pos = 0;
	
	// Sumar los números en la cadena
	while ((pos = cadena.find("+")) != string::npos) {
		resultado += stoi(cadena.substr(0, pos));
		cadena.erase(0, pos + 1);
	}
	resultado += stoi(cadena);
	
	// Mostrar el resultado
	cout << "Resultado: " << resultado << endl;
}

// Función para obtener el nombre completo formateado
void nombreCompletoFormateado() {
	cout << "Ingrese el nombre completo: ";
	cin.ignore();
	getline(cin, nombreCompleto);
	separarYConvertirMayusculas();
	
	// Mostrar el nombre completo formateado
	cout << "Nombre completo: " << apePat << " " << apeMat << " " << nombre << endl;
}

// Función para ofuscar una cadena según reglas específicas
void ofuscarCadena() {
	string cadena;
	cout << "Ingrese la cadena a ofuscar: ";
	cin.ignore();
	getline(cin, cadena);
	
	// Aplicar reglas de ofuscación
	for (char &c : cadena) {
		switch (c) {
		case 'a':
		case 'A':
			c = '4';
			break;
		case 'e':
		case 'E':
			c = '3';
			break;
		case 'i':
		case 'I':
			c = '1';
			break;
		case 'o':
		case 'O':
			c = '0';
			break;
		case 's':
		case 'S':
			c = '5';
			break;
		case 't':
		case 'T':
			c = '7';
			break;
			// Añadir más casos según la tabla de cambios
		}
	}
	
	// Mostrar la cadena ofuscada
	cout << "Cadena ofuscada: " << cadena << endl;
}

// Submenú para ofuscar cadenas
void submenuOfuscar() {
	char opcion;
	do {
		cout << "SUBMENU OFUSCAR" << endl;
		cout << "(1) - Ofuscar cadena." << endl;
		cout << "(s/S) - Volver al menú principal." << endl;
		
		cout << "Ingrese su elección: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			ofuscarCadena();
			break;
			
		case 's':
		case 'S':
			cout << "Volviendo al menú principal." << endl;
			break;
			
		default:
			cout << "Opción no válida." << endl;
		}
		
	} while (opcion != 's' && opcion != 'S');
}

// Menú principal del programa
void menuPrincipal() {
	char opcion;
	do {
		cout << "MENU PRINCIPAL" << endl;
		cout << "(1) - Suma de una cadena." << endl;
		cout << "(2) - Nombre completo." << endl;
		cout << "(3) - Submenu Ofuscar." << endl;
		cout << "(s/S) - Salir" << endl;
		
		cout << "Ingrese su elección: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			sumarCadena();
			break;
			
		case '2':
			nombreCompletoFormateado();
			break;
			
		case '3':
			submenuOfuscar();
			break;
			
		case 's':
		case 'S':
			cout << "Saliendo del programa." << endl;
			break;
			
		default:
			cout << "Opción no válida." << endl;
		}
		
	} while (opcion != 's' && opcion != 'S');
}

// Función principal del programa
int main() {
	menuPrincipal();
	return 0;
}

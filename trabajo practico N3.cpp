#include <iostream>
#include <cctype>

using namespace std;

// Variables globales para almacenar el nombre completo y las partes separadas
string nombreCompleto, nombre, apePat, apeMat;

// Funci�n para separar el nombre completo en nombre, apellido paterno y apellido materno
void separarYConvertirMayusculas() {
	int pini = 0;
	int pfinal = nombreCompleto.find(" ", pini);
	
	// Obtener el nombre y convertir la primera letra a may�scula
	nombre = nombreCompleto.substr(pini, pfinal);
	nombre[0] = toupper(nombre[0]);
	
	// Obtener el apellido paterno y convertir la primera letra a may�scula
	pini = pfinal + 1;
	pfinal = nombreCompleto.find(" ", pini);
	apePat = nombreCompleto.substr(pini, pfinal - pini);
	apePat[0] = toupper(apePat[0]);
	
	// Obtener el apellido materno y convertir la primera letra a may�scula
	apeMat = nombreCompleto.substr(pfinal + 1);
	apeMat[0] = toupper(apeMat[0]);
}

// Funci�n para sumar una cadena de n�meros separados por '+'
void sumarCadena() {
	string cadena;
	cout << "Ingrese la cadena de n�meros separados por '+': ";
	cin.ignore();
	getline(cin, cadena);
	
	int resultado = 0;
	size_t pos = 0;
	
	// Sumar los n�meros en la cadena
	while ((pos = cadena.find("+")) != string::npos) {
		resultado += stoi(cadena.substr(0, pos));
		cadena.erase(0, pos + 1);
	}
	resultado += stoi(cadena);
	
	// Mostrar el resultado
	cout << "Resultado: " << resultado << endl;
}

// Funci�n para obtener el nombre completo formateado
void nombreCompletoFormateado() {
	cout << "Ingrese el nombre completo: ";
	cin.ignore();
	getline(cin, nombreCompleto);
	separarYConvertirMayusculas();
	
	// Mostrar el nombre completo formateado
	cout << "Nombre completo: " << apePat << " " << apeMat << " " << nombre << endl;
}

// Funci�n para ofuscar una cadena seg�n reglas espec�ficas
void ofuscarCadena() {
	string cadena;
	cout << "Ingrese la cadena a ofuscar: ";
	cin.ignore();
	getline(cin, cadena);
	
	// Aplicar reglas de ofuscaci�n
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
			// A�adir m�s casos seg�n la tabla de cambios
		}
	}
	
	// Mostrar la cadena ofuscada
	cout << "Cadena ofuscada: " << cadena << endl;
}

// Submen� para ofuscar cadenas
void submenuOfuscar() {
	char opcion;
	do {
		cout << "SUBMENU OFUSCAR" << endl;
		cout << "(1) - Ofuscar cadena." << endl;
		cout << "(s/S) - Volver al men� principal." << endl;
		
		cout << "Ingrese su elecci�n: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			ofuscarCadena();
			break;
			
		case 's':
		case 'S':
			cout << "Volviendo al men� principal." << endl;
			break;
			
		default:
			cout << "Opci�n no v�lida." << endl;
		}
		
	} while (opcion != 's' && opcion != 'S');
}

// Men� principal del programa
void menuPrincipal() {
	char opcion;
	do {
		cout << "MENU PRINCIPAL" << endl;
		cout << "(1) - Suma de una cadena." << endl;
		cout << "(2) - Nombre completo." << endl;
		cout << "(3) - Submenu Ofuscar." << endl;
		cout << "(s/S) - Salir" << endl;
		
		cout << "Ingrese su elecci�n: ";
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
			cout << "Opci�n no v�lida." << endl;
		}
		
	} while (opcion != 's' && opcion != 'S');
}

// Funci�n principal del programa
int main() {
	menuPrincipal();
	return 0;
}

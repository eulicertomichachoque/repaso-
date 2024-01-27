#include <iostream>
using namespace std;
//INGRESAR UNA CADENA NOMBRE, APE PATERNO Y APE MATERNO
//EJ.Juan perez flor
// perez flor juan
string nombreCompleto, nombre, apePat, apeMat;
void separarNombre()
{
	
	
	int pini=0;
	int pfinal=nombreCompleto.find(" ",pini);
	nombre=nombreCompleto.substr(pini,pfinal);

	pini=pfinal+1;
	pfinal=nombreCompleto.find(" " , pini);
	apePat=nombreCompleto.substr(pini,pfinal-pini);
	apeMat=nombreCompleto.substr(pfinal+1);
	
	
	//*pini=pfinal;
	//pfinal=.find("",pini);
	//cout<<"pos:"<<pfinal<<endl;
	//apePat=nombreCompleto,substr(pini,pfinal- pini)
	
}
	

int main(int argc, char *argv[]) {
	
	cout<<"ingrese su nombre completo: ";
	getline(cin, nombreCompleto);
	separarNombre();
	
	cout<<"nombre: "<<nombre<<endl;
	cout<<"apellido paterno: "<<apePat<<endl;
	cout<<"apellido materno: "<<apeMat<<endl;
	
	//ImprimirNombre();
	return 0;
}


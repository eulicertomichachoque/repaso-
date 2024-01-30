#include <iostream>
#include <string>//cadena
using namespace std;

string frutas[] = {"Manzana", "Banana", "Naranja", "Fresa", "Kiwi", "Mango", "Pera", "Uva", "Melón", "Papaya"};
string preparados[] = {"Jugo", "Ensalada", "Frapé", "Tarta", "Helado", "Mermelada", "Batido", "Asado", "Cóctel", "Crudo"};
string fruta[5];
string preparado[5];

string generarFruta()
{
	return frutas[rand()%10];
}
string generarPreparado()
{
	return preparados[rand()%10];
}
void generar(){
	for(int i=0;i<5;i++)
	{
		fruta[i]=generarFruta();
		preparado[i]=generarPreparado();
	}
}	
void imprimir()
{
	cout<<"Menu de productos"<<endl;
	for(int i=0;i<5;i++)
		cout<<preparado[i]<<" de "<<fruta[i]<<endl;
}

int main(int argc, char *argv[]) {
	generar();
	imprimir();
	return 0;
}


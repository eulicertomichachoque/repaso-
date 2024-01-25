#include <iostream>
using namespace std;
//Declaraciones de variable globales.
int n1,n2;

int sumar()
{
	return n1+n2;
	
}

int multiplicar (){
	
	return n1*n2;
	
}
	void ingresar (){
		cout<<"ingresar el primer numero:";
		cin>>n1;
		cout<<"ingresar el segundo numero:";
		cin>>n2;
	}
	
int main(int argc, char *argv[]) {
	ingresar ();
	cout<<"suma de los numeros es:"<<sumar ()<<endl;
	cout<<"multiplicacion de los numeros es:"<<multiplicar()<<endl;
	return 0;
}


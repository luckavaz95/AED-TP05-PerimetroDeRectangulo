/* Trabajo Práctico 5 Perimetro de Rectangulo
* Lucas Vázquez
* 13/05/2015
*/

#include <iostream>
#include <cstdlib>
using namespace std;

double getnumeropositivo();
double getperimetro(double,double);

int main(){
	cout<<"Ingrese un valor para la altura del rectangulo \n";
	double h=getnumeropositivo();
	cout<<"Ingrese un valor para la base del rectangulo \n";
	double b=getnumeropositivo();
	cout<<"El perimetro del rectangulo es "<<getperimetro(h,b);
}

double getnumeropositivo(){
	double A;
	do
		cin>>A;
	while (A<=0.0);
	return A;
}
double getperimetro(double h,double b){
	double P;
	P=2*(h+b);
	return P;
}

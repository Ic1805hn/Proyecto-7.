#include <iostream>
using namespace std;

struct astro
{
	//atributos
	string nombre;
	int distancia;
	//mC)todos o funciones
};

int main()
{
	//aqui se toma el registro del planeta al cual se le asignaran los astros
	string planeta;
	cout<<"¿A cual planeta desea registarle astros?\n";
	cin>>planeta;
	//en esta parte se puede elegir la cantidad de astros que se le desea registrar al planeta
	int Cantidad_astros;
	int cantidad;
	cout<<"ingrese la cantidad de Astrsos del planeta "<<planeta<<" que desea registrar:\n";
	cin>>cantidad;
	//aqui procedemos con la toma de datos y el registro de los mismos
	astro listaastros[cantidad];
	int acumulador=0;
	int i;
	//el uso de "for" tiene la finalidad de guardar y registrar la cantidad correspondiente de astros (nombres y distancias)
	for (i=0; i<cantidad; i++)
	{
		cout<<"ingrese el nombre del Astro:\n";
		cin>>listaastros[i].nombre;
		cout<<"ingrese la distancia del Astro respecto al planeta "<<planeta<<"\n";
		cin>>listaastros[i].distancia;
		acumulador = acumulador + listaastros[i].distancia;
	}

	cout <<"Se registraton con exito "<<cantidad<< " Astros correctamente, gracias";

}

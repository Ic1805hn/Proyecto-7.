#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int menu, menu_1;
	cout<<"Bienvenido al planetario Earth, a continuacion te mostrare las opciones del menu \n";
	cout<<"1. Consultar informacion acerca de la distancia de diferentes planetas \n";
	cout<<"2. consultar informacion acerca de la inclinacion orbital de los planetas \n";
	cout<<"3. registrar o eliminar un satelite natural\n";
	cout<<"4. editar la informacion de un satelite natural\n";
	cout<<"5. salir del menu.\n";

	cout<<"A continuacion ingresa el numero del punto del menu al que deseas ingresar: ";
	cin>>menu;
	switch(menu)
	{
	case 1:
		cout<<"Bienvenido al modulo de informacion de distancias entre planetas.";
		break;
	case 2:
		cout<<"Bienvenido al modulo de informacion acerca de la inclinacion orbital de los planetas.";
		break;
	case 3:
		cout<<"Aqui puedes registrar o eliminar informacion relacionado con los diferentes satelites.";
		break;
	case 4:
		cout<<"Bienvenido al modulo de edicion de informacion de satelites naturales.";
		break;
	case 5:
		cout<<"gracias :)";
		break;

	default:
		cout<<"Este punto no esta registrado en el menu"<<endl;
	}
}
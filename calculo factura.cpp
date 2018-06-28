#include <iostream>
#include <cstdlib>
using namespace std;
 
int main()
{
	float subtotal, impuesto, calculoDescuento, calculoImpuesto, total, descuento;
	char exencion;
	
	cout << "\n\nCalculo del total de una factura con descuento e impuesto :\n";
	cout << "-------------------------------------------------------------\n";
	cout << "\n\nIngrese el subtotal: " << endl; 
	cin >> subtotal;
	cout << "\n\nIngrese el descuento: " << endl; 
	cin >> descuento;
	cout << "\n\nEs factura exenta? S/N" << endl;
	cin >> exencion;
	
		switch(exencion){
		case 'S':
			case 's':
				impuesto = 0;
				break;
		case 'N':
			case 'n':
				impuesto = 0.15;
				break;
		default:
			cout << "Letra invalida" << endl;
		}
	

	calculoDescuento = (subtotal * descuento) / 100;
	calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
	total = subtotal - calculoDescuento + calculoImpuesto;
	
	cout << "\n\nEl total a pagar es "<< total;
}

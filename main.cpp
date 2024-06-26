#include <iostream>
using namespace std;
/* José Vásquez, Luis Espinoza, Adrian Aguirre, Jesus Arrieche */

int main() {
string razonSocial;
int rifCedula;
int cantidadCompras = 0;
int MayorCantidadCompras = 0;
float totalVentas = 0;

cout, "Ingrese la razon social del cliente: ";		

getline(cin,razonSocial);
 std::cout, "ingrese rif/cedula del cliente: ";
std::cin >> rifCedula;

while 
(razonSocial !="0" && rifCedula !=0) {
	
	int cantidadproductos;
	float PrecioProducto;
	float montoPagar;
	
	std::cout << "Ingrese la cantidad de productos comprados:";
	std::cin >> cantidadproductos;
	std::cout << "Ingrese nombre del producto:";
	std::cin >> PrecioProducto;
	
	
	montoPagar = cantidadproductos*PrecioProducto;
	totalVentas +=montoPagar;
	cantidadCompras++;
	
	if ( cantidadproductos > MayorCantidadCompras){
		MayorCantidadCompras=cantidadproductos;
	}
	
}
}
	
	

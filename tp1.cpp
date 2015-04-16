/*
	TP 1 - Uso de variables, valores y operaciones de los tipos de datos.
	Federico Daniel Bustamante
	16/04/2015
*/

#include <iostream>

int main() {
	int a;
	int b;
	int c;
	double d;
	std::string s;
	bool e(false);
	char m;
	

	std::cout << "Ingrese su nombre: ";

	std::cin >> s;

	std::cout << "Bienvenido " << s << "\n";

	std::cout << "Ingrese un numero entero: ";
	
	std::cin >> a;

	std::cout << "Ingrese otro numero entero: ";

	std::cin >> b;

	c = a * b;

	if (c > 100) {
		e = true;
	}
	
	std::cout << "El resultado de la multiplicacion de ambos numeros es: " << c << "\n";

	if (e) {
		std::cout << "El numero es mayor que 100\n";
	}

	std::cout << "Ingrese un numero decimal: ";
	
	std::cin >> d;

	if ( d > 3.14 ) {
		std::cout << "El numero es mayor que PI" << "\n";
	} else {
		std::cout << "El numero es menor que PI" << "\n";
	}

	std::cout << "Ya es de noche? (s/n): ";

	std::cin >> m;

	if (m == 's') {
		std::cout << "Que tengas una buena noche." << "\n";
	} else {
		std::cout << "Que tengas un buen día." << "\n";
	}

	return 0;
}

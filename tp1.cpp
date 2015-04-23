/*
	TP 1 - Uso de variables, valores y operaciones de los tipos de datos.
	Federico Daniel Bustamante
	23/04/2015
*/

#include <iostream>

int main() {
	int a = 10;
	int b = 5;
	int c;
	int d;
	double e = 18.14;
	double f = 9.36;
	double g;
	bool l = true;
	char m = 'a';
	char x = 'a';
	std::string s1 = "Hola ";
	std::string s2 = "Chau";
	std::string concat;

	concat = s1 + s2;

	std::cout << "Concatenamos dos cadenas: " << concat << "\n";

	std::cout << "El largo de las cadenas contatenadas es: " << concat.size() << "\n";

	c = a * b;
	
	std::cout << "El resultado de la multiplicacion de 10 y 5 es: " << c << "\n";

	d = a + b;
	
	std::cout << "El resultado de la suma de 10 y 5 es: " << d << "\n";

	g = e * f;

	std::cout << "El resultado de la multiplicacion de 18.14 y 9.36 es: " << g << "\n";

	std::cout << "Niego el valor booleano true: " << not l << "\n";

	std::cout << "Los caracteres son iguales: " << (m == x) << "\n";

	std::cout << "Los caracteres son diferentes: " << (m != x) << "\n";

	return 0;
}

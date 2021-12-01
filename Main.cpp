#include <iostream>
#include <string>
#include <math.h>
#include <Windows.h>


int main() {

	//variables
	int c;
	int f = 32.8;

	//Decoration
	std::cout << "*******************************************************\n";
	std::cout << "W e L c O m E  t O  f A r E n H e I t   F r E n Z y \n";
	std::cout << "*******************************************************\n";

	//Interaction
	std::cout << "Please Enter Celcius to Begin!" << std::endl;
	std::cin >> c;

	//Cool Delay Animation
	std::cout << "Converting to Farenheit";

	Sleep(1000);
	std::cout << ".";

	Sleep(1000);
	std::cout << ".";

	Sleep(1000);
	std::cout << ".";

	Sleep(1000);
	std::cout << ".\n\n";

	//Converting
	std::cout << c * f << " Farenheit";

	return 0;
}
#include <iostream>
#include <string>
#include "Header.h"


Counter::Counter(std::string q) {

	if (q == "да") {
		std::cout << "¬ведите начальное значение: ";
		std::cin >> a;
	}
	else { a = 1; }
}

void Counter::add() { a++; }

void Counter::subtract() { a--; }

void Counter::equal() { std::cout << a << std::endl; }

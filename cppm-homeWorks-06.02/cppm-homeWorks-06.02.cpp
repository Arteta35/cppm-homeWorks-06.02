
#include <iostream>
#include <Windows.h>
#include <string>
#include "Header.h"



int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string q;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> q;

	Counter count(q);

	char znak;

	bool play = true;

	while (play)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> znak;

		switch (znak)
		{
		case '+':
			count.add();
			break;
		case '-':
			count.subtract();
			break;
		case '=':
			count.equal();
			break;
		case 'x':
			play = false;
			break;

		default:
			break;
		}
	}

	std::cout << "До свидания!";

}



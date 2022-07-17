#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "class_Fraction.h"


int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int x = 0;
	int y = 0;

	Fraction f(0, 0);
		
	Fraction a3(x, y);

	std::cout << "������� ��������� ����� 1: " << "\n";
	std::cin >>x;
	std::cout << "������� ����������� ����� 1: " << "\n";
	std::cin >> y;
	Fraction a1(x, y);

	std::cout << "������� ��������� ����� 2: " << "\n";
	std::cin >> x;
	std::cout << "������� ����������� ����� 2: " << "\n";
	std::cin >> y;
	Fraction a2(x, y);


	a3 = a1 + a2;
	std::cout << a1.print_info() << " + " << a2.print_info() << " = " << a3.print_info()<<"\n";

	a3 = a1 - a2;
	std::cout << a1.print_info() << " - " << a2.print_info() << " = " << a3.print_info() << "\n";

	a3 = a1 * a2;
	std::cout << a1.print_info() << " * " << a2.print_info() << " = " << a3.print_info() << "\n";

	a3 = a1 / a2;
	std::cout << a1.print_info() << " / " << a2.print_info() << " = " << a3.print_info() << "\n";

	a3 = ++a1 * a2;
	std::cout << "++" << a1.print_info() << " * " << a2.print_info() << " = " << a3.print_info() << "\n";
	std::cout << "�������� ����� 1 " << a1.print_info() << "\n";

	a3 = a1-- * a2;
	std::cout << a1.print_info() << "--" << " * " << a2.print_info() << " = " << a3.print_info() << "\n";
	std::cout << "�������� ����� 1 " << a1.print_info() << "\n";

	

	return 0;
}
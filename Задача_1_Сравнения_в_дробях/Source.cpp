#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <iostream>


class Fraction
{
private:
	int numerator_;
	int denominator_;
	
public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}


	bool operator==(const Fraction &other) const
	{
		return numerator_ * other.denominator_ == other.numerator_ * denominator_;

	/*	int a, b;
		a = numerator_ * other.denominator_;
		b = other.numerator_ * denominator_;
		if (a == b)
		{
			return true;
		}
		else
		{
			return false;
		}*/

	}
	
	bool operator!=(const Fraction &other) const
	{
		return !(this->operator==(other));

	}

	bool operator<(const Fraction &other) const
	{
		int a, b;
		a = numerator_ * other.denominator_;
		b = other.numerator_ * denominator_;
		if (a < b)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	bool operator>(const Fraction &other) const
	{
		return !(this->operator<(other));
	}

	bool operator<=(const Fraction &other) const
	{
		if(this->operator<(other) || this->operator==(other) )
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	bool operator>=(const Fraction &other) const
	{
		return !(this->operator<=(other));
	}
};




int main(int argc, char** argv)
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
		Fraction f1(4, 3);
		Fraction f2(6, 11);

		std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
		std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
		std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
		std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
		std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
		std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
		return 0;
	}

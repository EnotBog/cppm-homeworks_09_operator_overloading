#include <string>
#include "class_Fraction.h"

	 int Fraction::NOD(int a, int b) const // наибольший общий делитель
	{
		if (a % b == 0)
		{
			return b;
		}
		if (b % a == 0)
		{
			return a;
		}


		if (a > b)
		{
			return NOD(a - b, b);
		}
		if (a < b)
		{
			return NOD(a, b - a);
		}
		return 0;
	}

	void Fraction::Socr_Fraction(Fraction& a) const
	{
		int x = NOD(a.numerator_, a.denominator_);
		if (x != 1)
		{
			a.numerator_ /= x;
			a.denominator_ /= x;
		};
	}


	Fraction::Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	void Fraction::Set_numerator(int x)
	{
		numerator_ = x;
	}

	void Fraction::Set_ndenominator(int y)
	{
		denominator_ = y;
	}

	std::string Fraction::print_info() const
	{
		return std::to_string(numerator_) + "/" + std::to_string(denominator_);
	}

	Fraction Fraction::operator+(const Fraction& other) const
	{
		int a = (numerator_ * other.denominator_) + (other.numerator_ * denominator_);
		int b = denominator_ * other.denominator_;

		Fraction buf(a, b);
		Socr_Fraction(buf);
		return  buf;
	}

	Fraction Fraction::operator-(const Fraction& other) const
	{
		int a = (numerator_ * other.denominator_) - (other.numerator_ * denominator_);
		int b = denominator_ * other.denominator_;

		Fraction buf(a, b);
		Socr_Fraction(buf);
		return  buf;
	}

	Fraction Fraction::operator*(const Fraction& other) const
	{
		int a = (numerator_ * other.numerator_);
		int b = denominator_ * other.denominator_;

		Fraction buf(a, b);
		Socr_Fraction(buf);
		return  buf;
	}

	Fraction Fraction::operator/(const Fraction& other) const
	{
		int a = (numerator_ * other.denominator_);
		int b = denominator_ * other.numerator_;

		Fraction buf(a, b);
		Socr_Fraction(buf);
		return  buf;
	}

	Fraction Fraction::operator++()
	{
		numerator_ += denominator_;

		Socr_Fraction(*this);
		return *this;
	}

	Fraction Fraction::operator++(int) // постфиксная
	{
		Fraction temp = *this;
		++(*this);
		Socr_Fraction(temp);
		return temp;
	}

	Fraction Fraction::operator--()
	{
		numerator_ -= denominator_;
		Socr_Fraction(*this);
		return *this;
	}

	Fraction Fraction::operator--(int) //постфиксная
	{
		Fraction temp = *this;
		--(*this);
		Socr_Fraction(temp);
		return temp;
	}


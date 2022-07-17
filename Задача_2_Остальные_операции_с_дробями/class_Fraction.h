#pragma once
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;


	int NOD(int a, int b) const; // наибольший общий делитель
	

	void Socr_Fraction(Fraction& a) const;
	

public:
	Fraction(int numerator, int denominator);

	void Set_numerator(int x);

	void Set_ndenominator(int y);

	std::string print_info() const;

	Fraction operator+(const Fraction& other) const;

	Fraction operator-(const Fraction& other) const;

	Fraction operator*(const Fraction& other) const;

	Fraction operator/(const Fraction& other) const;

	Fraction operator++();

	Fraction operator++(int); // постфиксная

	Fraction operator--();

	Fraction operator--(int); //постфиксная
	

};

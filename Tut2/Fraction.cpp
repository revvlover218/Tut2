#include <iostream>
#include <string>
#include <math.h>
#include "Fraction.h"


Fraction::Fraction()
{

	numerator = 0;
	denominator = 1;
}


Fraction::Fraction(int num, int denom)
{
	
	numerator = num;
	denominator = denom;
}

Fraction::~Fraction()
{
}

int Fraction::getDenominator()
{
	return denominator;
}

int Fraction::getNumerator()
{
	return numerator;
}

void Fraction::setNumerator(const int numer)
{
	numerator = numer;
}

bool Fraction::setDenominator(const int denom)
{

	bool set = false;

	if (denom != 0)		//Prevents setting the Denominator to Zer0
	{

		set = true;
		denominator = denom;
	}

	return set;
}

Fraction Fraction::multiplication(Fraction &frac1, Fraction &frac2)
{

	Fraction product;

	product.numerator = frac1.numerator * frac2.numerator;
	product.denominator = frac1.denominator * frac2.denominator;
	
	return product;
}

Fraction Fraction::operator*(const Fraction& Frac)
{

	Fraction f;

	f.numerator = numerator * Frac.numerator;
	f.denominator = denominator * Frac.denominator;
	
	return f;
}

Fraction Fraction::division(Fraction &frac1, Fraction &frac2)
{

	Fraction qoutient;

	qoutient.numerator = frac1.numerator * frac2.denominator;
	qoutient.denominator = frac1.denominator * frac2.numerator;

	return qoutient;
}

Fraction Fraction::operator/(const Fraction& Frac)
{

	Fraction f;

	f.numerator = numerator / Frac.numerator;
	//f.Numeratorf2 = Numeratorf2 / Frac.Numeratorf2;
	f.denominator = denominator / Frac.denominator;
	//f.Denominatorf2 = Denominatorf2 / Frac.Denominatorf2;

	return f;
}

Fraction Fraction::addition(Fraction &frac1, Fraction &frac2)
{

	Fraction sum;

	sum.numerator = (frac2.denominator * frac1.numerator) + (frac1.denominator * frac2.numerator);
	sum.denominator = frac1.denominator * frac2.denominator;

	return sum;
}

Fraction Fraction::operator+(const Fraction& Frac)		//Operator+ Overloading
{

	Fraction f;

	f.numerator = numerator + Frac.numerator;
	//f.Numeratorf2 = Numeratorf2 + Frac.Numeratorf2;
	f.denominator = denominator + Frac.denominator;
	//f.Denominatorf2 = Denominatorf2 + Frac.Denominatorf2;

	return f;
}

Fraction Fraction::subtraction(Fraction &frac1, Fraction &frac2)
{

	Fraction difference;

	difference.numerator = (frac2.denominator * frac1.numerator) - (frac1.denominator * frac2.numerator);
	difference.denominator = frac1.denominator * frac2.denominator;

	return difference;
}

Fraction Fraction::operator-(const Fraction& Frac)
{

	Fraction f;

	f.numerator = numerator - Frac.numerator;
	f.denominator = denominator - Frac.denominator;

	return f;
}

void Fraction::print()
{

	int wholenum = numerator / denominator;
	int remainder = numerator % denominator;

	if (wholenum != 0)
	{
		if (remainder == 0)
		{
			std::cout << wholenum;
		}

		else
		{
			std::cout << wholenum << "	" << remainder << " / " << denominator << "\n\n";
		}

	}

	else
	{
		std::cout << remainder << " / " << denominator << "\n\n";
	}
}
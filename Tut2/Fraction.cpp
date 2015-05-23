#include <iostream>
#include <string>
#include <math.h>
#include "Fraction.h"


Fraction::Fraction()
{
	/*Numeratorf1 = 0;
	Numeratorf2 = 0;
	Denominatorf1 = 1;
	Denominatorf2 = 1;*/
	numerator = 0;
	denominator = 1;
}


Fraction::Fraction(int num, int denom)
{
	/*Numeratorf1 = numf1;
	Numeratorf2 = numf2;
	Denominatorf1 = denomf1;
	Denominatorf2 = denomf2;*/
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

/*int Fraction::getDf2()
{

	return Denominatorf2;
}*/

int Fraction::getNumerator()
{

	return numerator;
}

/*int Fraction::getNf2()
{

	return Numeratorf2;
}*/

void Fraction::setNumerator(const int numer)
{

	numerator = numer;
}

/*void Fraction::setNf2(const int numerf2)
{

	Numeratorf2 = numerf2;
}*/

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

/*bool Fraction::setDf2(const int denomf2)
{

	bool set = false;

	if (denomf2 != 0)		//Prevents setting the Denominator to Zer0
	{

		set = true;
		Denominatorf2 = denomf2;
	}

	return set;
}*/

Fraction Fraction::multiplication(Fraction &frac1, Fraction &frac2)
{
	Fraction product;

	product.numerator = frac1.numerator * frac2.numerator;
	product.denominator = frac1.denominator * frac2.denominator;
	/*Fraction product;

	product.numerator = Numeratorf1 * Numeratorf2;
	product.denominator = Denominatorf1 * Denominatorf2;
	*/

	return product;
}

Fraction Fraction::operator*(const Fraction& Frac)
{

	Fraction f;

	f.numerator = numerator * Frac.numerator;
	//f.Numeratorf2 = Numeratorf2 * Frac.Numeratorf2;
	f.denominator = denominator * Frac.denominator;
	//f.Denominatorf2 = Denominatorf2 * Frac.Denominatorf2;

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
//	f.Numeratorf2 = Numeratorf2 - Frac.Numeratorf2;
	f.denominator = denominator - Frac.denominator;
//	f.Denominatorf2 = Denominatorf2 - Frac.Denominatorf2;

	return f;
}

void Fraction::print()
{









	/*int wholenum = numerator / denominator;
	int remainder = numerator % denominator;

	if (wholenum != 0)
	{
		if (remainder == 0)
		{

			std::cout << wholenum;
}

		else
{

			std::cout << wholenum << "	" << remainder << " / " << denominator;
		}

	}

	else
	{

		std::cout << remainder << " / " << denominator;
	}*/
}
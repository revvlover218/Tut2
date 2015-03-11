#include <iostream>
#include <string>
#include "Fraction.h"


Fraction::Fraction()
{
	Numeratorf1 = 0;
	Numeratorf2 = 0;
	Denominatorf1 = 1;
	Denominatorf2 = 1;
	numerator = 0;
	denominator = 1;
}


Fraction::Fraction(int numf1, int numf2, int denomf1, int denomf2)
{
	Numeratorf1 = numf1;
	Numeratorf2 = numf2;
	Denominatorf1 = denomf1;
	Denominatorf2 = denomf2;
}

Fraction::~Fraction()
{
}

int Fraction::getDf1()
{

	return Denominatorf1;
}

int Fraction::getDf2()
{

	return Denominatorf2;
}

int Fraction::getNf1()
{

	return Numeratorf1;
}

int Fraction::getNf2()
{

	return Numeratorf2;
}

void Fraction::setNf1(const int numerf1)
{

	Numeratorf1 = numerf1;
	return;
}

void Fraction::setNf2(const int numerf2)
{

	Numeratorf2 = numerf2;
	return;
}

bool Fraction::setDf1(const int denomf1)
{

	bool set = false;

	if (denomf1 != 0)		//Prevents setting the Denominator to Zer0
	{

		set = true;
		Denominatorf1 = denomf1;
	}

	return set;
}

bool Fraction::setDf2(const int denomf2)
{

	bool set = false;

	if (denomf2 != 0)		//Prevents setting the Denominator to Zer0
	{

		set = true;
		Denominatorf2 = denomf2;
	}

	return set;
}

/*Fraction Fraction::multiplication()
{

Fraction pd;

pd.numerator = Numeratorf1*Numeratorf2;
pd.denominator = Denominatorf1*Denominatorf2;

return pd;}

Fraction Fraction::division()
{

Fraction q;

q.numerator = Numeratorf1*Denominatorf2;
q.denominator = Denominatorf1*Numeratorf2;

return q;
}

Fraction Fraction::addition()
{

Fraction s;

s.numerator = (Numeratorf1*Denominatorf2) + (Numeratorf2*Denominatorf1);
s.denominator = Denominatorf1*Denominatorf2;

return s;
}*/

Fraction Fraction::operator+(const Fraction& Frac)		//Operator+ Overloading
{

	Fraction f;

	f.Numeratorf1 = Numeratorf1 + Frac.Numeratorf1;
	f.Numeratorf2 = Numeratorf2 + Frac.Numeratorf2;
	f.Denominatorf1 = Denominatorf1 + Frac.Denominatorf1;
	f.Denominatorf2 = Denominatorf2 + Frac.Denominatorf2;

	return f;
}

/*Fraction Fraction::subtraction()
{

Fraction d;

d.numerator = (Numeratorf1*Denominatorf2) - (Numeratorf2*Denominatorf1);
d.denominator = Denominatorf1*Denominatorf2;

return d;
}*/
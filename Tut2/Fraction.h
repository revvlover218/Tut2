#ifndef FRACTION_H
#define FRACTION_H

class Fraction {

private:

	int numerator;
	int denominator;

public:
	
	Fraction();										//Default Constructor
	Fraction(int, int);								//Overloaded Constructor
	~Fraction();									//Destructor

	int getNumerator();								//Accessors
	int getDenominator();

	void setNumerator(const int);					//Mutators
	bool setDenominator(const int);

	//Operations:

	Fraction multiplication(Fraction &frac1, Fraction &frac2);		
	Fraction operator*(const Fraction&);						//Overloaded operation*

	Fraction division(Fraction &frac1, Fraction &frac2);
	Fraction operator/(const Fraction&);						//Overloaded operation/

	Fraction addition(Fraction &frac1, Fraction &frac2);
	Fraction operator+(const Fraction&);						//Overloaded operation+

	Fraction subtraction(Fraction &frac1, Fraction &frac2);
	Fraction operator-(const Fraction&);						//Overloaded operation-

	void print();
};

#endif
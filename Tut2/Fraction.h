#ifndef FRACTION_H
#define FRACTION_H

class Fraction {

private:

	/*int Numeratorf1;
	int Numeratorf2;
	int Denominatorf1;
	int Denominatorf2;*/
	int numerator;
	int denominator;

public:
	
	Fraction();		//Default Constructor
	Fraction(int, int);		//Overloaded Constructor
	~Fraction();		//Destructor

	int getNumerator();		//Accessors
	//int getNf2();
	int getDenominator();
//	int getDf2();

	void setNumerator(const int);		//Mutators
	//void setNf2(const int numerf2);
	bool setDenominator(const int);
	//bool setDf2(const int denomf2);


	Fraction multiplication(Fraction &frac1, Fraction &frac2);		//Operation
	Fraction operator*(const Fraction&); //Overloaded operation

	Fraction division(Fraction &frac1, Fraction &frac2);
	Fraction operator/(const Fraction&);

	Fraction addition(Fraction &frac1, Fraction &frac2);
	Fraction operator+(const Fraction&);

	Fraction subtraction(Fraction &frac1, Fraction &frac2);
	Fraction operator-(const Fraction&);

	void print();
};

#endif
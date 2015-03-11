#ifndef FRACTION_H
#define FRACTION_H

class Fraction {

private:
	
	int Numeratorf1;
	int Numeratorf2;
	int Denominatorf1;
	int Denominatorf2;
	int numerator;
	int denominator;

public:
	Fraction();		//Default Constructor
	Fraction(int, int, int, int);		//Overloaded Constructor
	~Fraction();		//Destructor

	int getNf1();		//Accessors
	int getNf2();
	int getDf1();
	int getDf2();

	void setNf1(const int numerf1);		//Mutators
	void setNf2(const int numerf2);
	bool setDf1(const int denomf1);
	bool setDf2(const int denomf2);

	Fraction operator+(const Fraction &);
	
};

#endif
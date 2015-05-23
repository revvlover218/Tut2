#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

int main()
{

	int num;
	//int numf2;
	int denom;
	//int denomf2;

	Fraction product;
	Fraction qoutient;
	Fraction sum;
	Fraction diff;
	Fraction frac;
	Fraction frac1;
	Fraction frac2;

	//User Input
	cout << "Enter Fraction 1: " << "\n" << "Numerator: " << "\n";
	cin >> num;

	cout << "\n\n" << "Denominator: " << "\n";
	cin >> denom;

	frac1.setNumerator(num);
	frac1.setDenominator(denom);

	cout << "\n\n";

	cout << "Enter Fraction 2: " << "\n" << "Numerator: " << "\n";
	cin >> num;

	cout << "\n\n" << "Denominator: " << "\n";
	cin >> denom;

	frac2.setNumerator(num);
	frac2.setDenominator(denom);

	/*frac.setNf1(numf1);
	frac.setDf1(denomf1);
	frac.setNf2(numf2);
	frac.setDf2(denomf2);*/

	//Display functions

	cout << "Numerator 1:" << frac1.getNumerator() << "\n\n";
	cout << "Denominator 1:" << frac1.getDenominator() << "\n\n";
	cout << "Numerator 2:" << frac2.getNumerator() << "\n\n";
	cout << "Denomiator 2:" << frac2.getDenominator() << "\n\n";

/*	cout << "\n\n" << "Multiplication: ";
	product = frac.multiplication();
	product.print();

	cout << "\n" << "Division: ";
	qoutient = frac.division();
	qoutient.print();

	cout << "\n" << "Addition: ";
	sum = frac.addition();
	sum.print();

	cout << "\n" << "Subtraction: ";
	diff = frac.subtraction();
	diff.print();
	*/
	system("pause");
	return 0;
}

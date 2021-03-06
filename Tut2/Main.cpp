#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

int main()
{

	int num;
	int denom;

	Fraction product;
	Fraction qoutient;
	Fraction sum;
	Fraction diff;
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

	//Display functions

	cout << "Numerator 1 :" << frac1.getNumerator() << "\n\n";
	cout << "Denominator 1 :" << frac1.getDenominator() << "\n\n";
	cout << "Numerator 2 :" << frac2.getNumerator() << "\n\n";
	cout << "Denomiator 2 :" << frac2.getDenominator() << "\n\n";

	cout << "\n";

	cout << "\n\n" << "Multiplication: ";
	product = product.multiplication(frac1, frac2);
	product.print();

	cout << "\n" << "Division: ";
	qoutient = qoutient.division(frac1, frac2);
	qoutient.print();

	cout << "\n" << "Addition: ";
	sum = sum.addition(frac1, frac2);
	sum.print();

	cout << "\n" << "Subtraction: ";
	diff = diff.subtraction(frac1, frac2);
	diff.print();

	system("pause");
	return 0;
}

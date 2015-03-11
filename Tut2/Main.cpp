#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

int main()
{

	int numf1;
	int numf2;
	int denomf1;
	int denomf2;

	Fraction product;
	Fraction qoutient;
	Fraction sum; 
	Fraction diff;
	Fraction accmut;		//Accessor and Mutator object
	Fraction frac;

	//User Input
	cout << "Enter Fraction 1: " << "\n" << "Numerator: " << "\n";
	cin >> numf1;

	cout << "\n\n" << "Denominator: " << "\n";
	cin >> denomf1;

	cout << "\n\n";

	cout << "Enter Fraction 2: " << "\n" << "Numerator: " << "\n";
	cin >> numf2;

	cout << "\n\n" << "Denominator: " << "\n";
	cin >> denomf2;

	accmut.setNf1(numf1);
	accmut.setDf1(denomf1);
	accmut.setNf2(numf2);
	accmut.setDf2(denomf2);

	//Display functions

	cout << "\n\n" << "Multiplication: ";
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

	system("pause");
	return 0;
}

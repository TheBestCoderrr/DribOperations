#include <iostream>
#include "Class.h"

using namespace std;

Fraction Fraction::Sum(Fraction Right) const {
	Fraction ResultDrib;
	ResultDrib.d = this->d * Right.d;
	ResultDrib.n = this->n * Right.d + Right.n * this->d;
	return ResultDrib;
}

Fraction Fraction::Riz(Fraction Right) const {
	Fraction ResultDrib;
	ResultDrib.d = this->d * Right.d;
	ResultDrib.n = this->n * Right.d - Right.n * this->d;
	return ResultDrib;
}

Fraction Fraction::Multiply(Fraction Right) const {
	Fraction ResultDrib;
	ResultDrib.n = this->n * Right.n;
	ResultDrib.d = this->d * Right.d;
	return ResultDrib;
}

Fraction Fraction::Dil(Fraction Right) const {
	Fraction ResultDrib;
	ResultDrib.n = this->n * Right.d;
	ResultDrib.d = this->d * Right.n;
	return ResultDrib;
}


Fraction Fraction::SetDrib(Fraction& Drib) {
	int n, d;
	cout << "Enter Drib(n,d): ";
	cin >> n >> d;
	SetN(n);
	SetD(d);
	return Drib;
}

void Fraction::PrintDrib(Fraction Drib) const {
	cout << Drib.n << "\n-\n" << Drib.d << endl;
}
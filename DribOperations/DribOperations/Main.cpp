#include <iostream>
using namespace std;

class Fraction {
private:
	int n;
	int d;
public:
	void SetN(int n);
	void SetD(int d);
	Fraction Sum(Fraction Right) const;
	Fraction Riz(Fraction Right) const;
	Fraction Multiply(Fraction Right) const;
	Fraction Dil(Fraction Right) const;
};

inline void Fraction::SetN(int n) {
	this->n = n;
}
inline void Fraction::SetD(int d) {
	this->d = d;
}

Fraction Fraction::Sum(Fraction Right) const {
	Fraction ResultDrib;
	ResultDrib.d = this->d * Right.d;
	ResultDrib.n = this->n * Right.d + Right.d * this->d;
	return ResultDrib;
}

Fraction Fraction::Riz(Fraction Right) const {
	Fraction ResultDrib;
	ResultDrib.d = this->d * Right.d;
	ResultDrib.n = this->n * Right.d - Right.d * this->d;
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

int main()
{

}
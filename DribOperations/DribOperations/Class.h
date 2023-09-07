#pragma once
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
	Fraction SetDrib(Fraction& Drib);
	void PrintDrib(Fraction Drib) const;
};

inline void Fraction::SetN(int n) {
	this->n = n;
}
inline void Fraction::SetD(int d) {
	this->d = d;
}
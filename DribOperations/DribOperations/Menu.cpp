#include <iostream>
#include "Class.h"

using namespace std;

void Menu(Fraction &FirstDrib,Fraction &SecondDrib, Fraction &ResultDrib) {
	cout << "0 - exit\n1 - sum\n2 - riz\n3 - multiply\n4 - dil\n";
	int UserChoice = -1;
	while (UserChoice != 0) {
		cout << "Enter variant: ";
		cin >> UserChoice;
		switch (UserChoice) {
			case 0:
				break;
			case 1:
				FirstDrib.SetDrib(FirstDrib);
				SecondDrib.SetDrib(SecondDrib);
				ResultDrib = FirstDrib.Sum(SecondDrib);
				ResultDrib.PrintDrib(ResultDrib);
				break;
			case 2:
				FirstDrib.SetDrib(FirstDrib);
				SecondDrib.SetDrib(SecondDrib);
				ResultDrib = FirstDrib.Riz(SecondDrib);
				ResultDrib.PrintDrib(ResultDrib);
				break;
			case 3:
				FirstDrib.SetDrib(FirstDrib);
				SecondDrib.SetDrib(SecondDrib);
				ResultDrib = FirstDrib.Multiply(SecondDrib);
				ResultDrib.PrintDrib(ResultDrib);
				break;
			case 4:
				FirstDrib.SetDrib(FirstDrib);
				SecondDrib.SetDrib(SecondDrib);
				ResultDrib = FirstDrib.Dil(SecondDrib);
				ResultDrib.PrintDrib(ResultDrib);
				break;
			default:
				cout << "Error!" << endl;
				break;
		}
	}
}
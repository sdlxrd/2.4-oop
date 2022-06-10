#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
	Vector first, second;
	int n;

	cout << "Enter the first vector:\n";
///	cin >> first;
	first.AddVector(2);
	cout << endl;

	cout << "Enter the second vector:\n";
	second.AddVector(2);
	cout << endl;
	
	cout << "n = "; cin >> n;

	cout << "First * n = " << first.Multiply(n);;
	cout << endl;

	cout << "Second * n = " << second.Multiply(n) << endl;
	cout << endl;

	if (first == second)
		cout << "first vector = second vector " << endl;
	else
		cout << "first vector != second vector " << endl;
	
	cout << "\nFirst norma = " << first.Norma();
	cout << "\nSecond norma = " << second.Norma() << endl;
}
// Lab_04_3.cpp
// < Шиманова Юлія >
// Лабораторна робота № 4.3
// Табуляція функції, заданої графіком
// Варіант 28

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, x, xp, xk, xd, F;

	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	cout << "xp="; cin >> xp;
	cout << "xk="; cin >> xk;
	cout << "xd="; cin >> xd;

	cout << fixed;
	cout << "-----------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |" << setw(14) << "F" << " |" << endl;
	cout << "-----------------------------" << endl;

	x = xp;
	while (x <= xk) {
		if (c < 0 && a != 0)
			F = -a * x * x;
		else if (c > 0 && a == 0)
			F = (a - x) / (c * x);
		else
			F = x / c;

		cout << "|" << setw(10) << setprecision(2) << x << " |"
			<< setw(14) << setprecision(3) << F << " |" << endl;

		x += xd;
	}

	cout << "-----------------------------" << endl;
	return 0;
}
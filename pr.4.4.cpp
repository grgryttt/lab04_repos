// Lab_04_2.cpp
// < Шиманова Юлія >
// Лабораторна робота № 4.4
// Табуляція функції, заданої грфіком
// Варіант 28

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()

{
	double R, x, xp, xk, dx, y;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "-----------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |" << setw(14) << "y" << " |" << endl;
	cout << "-----------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x < -8 - R)
            y = -R;
        else if (x <= -8 + R)
            y = -R + sqrt(R * R - (x + 8) * (x + 8));
        else if (x <= 2)
            y = 2 + (x - 2) * (R + 2) / (10 - R);
        else if (x <= 6)
            y = 0;
        else
            y = (x - 6) * (x - 6);

        cout << "|" << setw(10) << setprecision(2) << x << " |"
            << setw(14) << setprecision(3) << y << " |" << endl;

        x += dx;
    }

    return 0;
}
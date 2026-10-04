// Lab_04_5.cpp
// < Шиманова Юлія >
// Лабораторна робота № 4.5
// Попадання» у плоску фігуру
// Варіант 28

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    double R, x, y;
    bool hit;

    cout << "R = "; cin >> R;

    srand((unsigned)time(NULL));

    // 1 спосіб: координати вводяться з клавіатури

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        

        hit = (x >= 0 && x * x + y * y <= R * R)                 
            || (x <= 0 && y <= R && y >= -x)               
            || (x <= 0 && y >= -R && y <= x);               

        if (hit)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    // 2 спосіб: випадкові координати з інтервалу [-R; R]
    for (int i = 0; i < 10; i++)
    {
        x = 2. * R * rand() / RAND_MAX - R;
        y = 2. * R * rand() / RAND_MAX - R;

        hit = (x >= 0 && x * x + y * y <= R * R)
            || (x <= 0 && y <= R && y >= -x)
            || (x <= 0 && y >= -R && y <= x);

        cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " ";

        if (hit)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
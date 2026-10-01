// Lab_04_1.cpp
// < Шиманова Юлія >
// Лабораторна робота № 4.1
// Цикли
// Варіант 28


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, N, i;
    double S;

    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;

    S = 0;
    i = k;

    while (i <= 19)
    {
        S += sqrt(pow(sin(1. * i), 2) + pow(cos(1. * N), 2) / i);
        i++;
    }

    cout << S << endl;

    S = 0;
    i = k;

    do
    {
        S += sqrt(pow(sin(1. * i), 2) + pow(cos(1. * N), 2) / i);
        i++;
    } while (i <= 19);

    cout << S << endl;

    S = 0;

    for (i = k; i <= 19; i++)
    {
        S += sqrt(pow(sin(1. * i), 2) + pow(cos(1. * N), 2) / i);
    }

    cout << S << endl;

    S = 0;

    for (i = 19; i >= k; i--)
    {
        S += sqrt(pow(sin(1. * i), 2) + pow(cos(1. * N), 2) / i);
    }

    cout << S << endl;

    return 0;
}
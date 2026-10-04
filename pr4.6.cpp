// Lab_04_6.cpp
// < Шиманова Юлія >
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 28


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, S;
    int i, k;

    // 1) while
    P = 1;
    i = 2;
    while (i <= 10) {
        S = 0;
        k = 1;
        while (k <= 20 - i) {
            S += (double)i / k;
            k++;
        }
        P *= (1 + S) / (1 + S * S);
        i++;
    }
    cout << P << endl;

    // 2) do-while
    P = 1;
    i = 2;
    do {
        S = 0;
        k = 1;
        do {
            S += (double)i / k;
            k++;
        } while (k <= 20 - i);
        P *= (1 + S) / (1 + S * S);
        i++;
    } while (i <= 10);
    cout << P << endl;

    // 3) for
    P = 1;
    for (i = 2; i <= 10; i++) {
        S = 0;
        for (k = 1; k <= 20 - i; k++) {
            S += (double)i / k;
        }
        P *= (1 + S) / (1 + S * S);
    }
    cout << P << endl;

    // 4) for 
    P = 1;
    for (i = 10; i >= 2; i--) {
        S = 0;
        for (k = 20 - i; k >= 1; k--) {
            S += (double)i / k;
        }
        P *= (1 + S) / (1 + S * S);
    }
    cout << P << endl;

    return 0;
}
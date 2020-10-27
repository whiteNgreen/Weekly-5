#pragma once
#include <iostream>

double count;
double eks;
double num;

//  f(x) = 0.2x^3 - 9x^2 + 17x + 20
//  F(x) = 0.05x^4 - 3x^3 + 17 + C

double Eksplisitt_1g(double x) {
    double Fx = pow(0.05 * x, 4) - pow(3 * x, 3) + 17;
    return Fx;
}
double Numerisk_1g(double x1, double x2) {
    double num = (pow(0.05 * x2, 4) - pow(3 * x2, 3) + 17) - (pow(0.05 * x1, 4) - pow(3 * x1, 3) + 17);
    return num;
}
void oppg1g() {
    for (double i = 0; i < 2; i += 0.5) {
        num += Numerisk_1g(count, i);
        count = i;
    }
    eks = Eksplisitt_1g(2);
    std::cout << "Oppgave 1g" << '\n';
    std::cout << "Numerisk: " << num << '\n';
    std::cout << "Eksplisitt: " << eks << '\n';
    std::cout << '\n';

}

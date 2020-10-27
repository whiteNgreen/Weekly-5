#pragma once
#include <iostream>

//f(x) = cosx - x
//F(x) = -sinx - 1
int r;
//Riemann sum
double cosXmX(double x) {
    return cos(x) - x;
}
double riemann(double x1, double x2) {
    double riemann = (-sin(x2) - 1) - (-sin(x1) - 1);
    return riemann;
}
double derivert(double x) {
    double derivert = -sin(x) - 1;
    return derivert;
}
void oppg1a() {
    double funkX = 0;
    std::cout << "Oppgave 1a" << '\n';
    for (double i = 0; i < 2; i += 0.01) {
        funkX = cosXmX(i);
        if (funkX <= 0.01 && funkX >= -0.01) {
            std::cout << "X = " << i << "\n";
        }
    }

    double x2;
    double x1;
    double riePrint = 0;
    double deriPrint = 0;
    for (double i = 0.70; i < 1.1; i += 0.2) {
        x2 = i + 0.2;
        x1 = i;
        riePrint += riemann(x1, x2);
    }
    deriPrint = derivert(0.6);
    std::cout << "Riemann Sum: " << riePrint << '\n';
    std::cout << "Deriverte: " << deriPrint << '\n';
    std::cout << '\n';
}

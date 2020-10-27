#pragma once
#include <iostream>

double x;
double newtAnswer;

// f(x) = cos x - x 
// f'(x) = -sin x - 1

double newton2a(double x) {
    double newt = 0;
    newt = x - ((cos(x) - x) / (-sin(x) - x));
    return newt;
}
void oppg2a() {
    x = 0.01;
    std::cout << "Oppgave 2a" << '\n';

    for (int i = 0; i < 100; i++) {
        newtAnswer = newton2a(x);
        x += 0.01;
        if (newtAnswer < 0.1 && newtAnswer > -0.1) {
            std::cout << newtAnswer << '\n';
        }
    }
    std::cout << '\n';

}


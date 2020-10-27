#pragma once
#include <iostream>
#include "Oppg2a.h"

// f(x) = 0.2x^3 - 9x^2 + 17x + 20
// f'(x) = 0.6x^2 - 18x + 17

double newton2c(double x) {
    double newt = 0;
    newt = pow(0.6 * x, 2) - 18 * x + 17;
    return newt;
}

void oppg2b() {
    x = -2.0;
    std::cout << "Oppgave 2c" << '\n';

    for (int i = 0; i < 100; i++) {
        newtAnswer = newton2a(x);
        x += 0.1;
        if (x == 0) {
            x = 0.1;
        }
        if (newtAnswer < 0.1 && newtAnswer > -0.1) {
            std::cout << newtAnswer << '\n';
        }
    }
    std::cout << '\n';

}


#include <iostream>
#include <string>
#include <stdexcept>
#include "randfuncs.h"

using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) throw invalid_argument("Division by zero");
    return a / b;
}

void runMath(double a, double b) {
    cout << a << " + " << b << " = " << add(a, b) << "\n";
    cout << a << " - " << b << " = " << subtract(a, b) << "\n";
    cout << a << " * " << b << " = " << multiply(a, b) << "\n";
    try {
        cout << a << " / " << b << " = " << divide(a, b) << "\n";
    } catch (const invalid_argument &e) {
        cerr << "Error: " << e.what() << "\n";
    }
}

int main(int argc, char *argv[]) {
    string flag = (argc >= 2) ? argv[1] : "";

    if (flag == "-c") {
        flip_coin();
    } else if (flag == "-d6") {
        roll_d6();
    } else if (flag == "-d20") {
        roll_d20();
    } else if (flag == "-r") {
        double a = intrand(100) + 1;
        double b = intrand(100) + 1;
        cout << "Random numbers: " << a << " and " << b << "\n";
        runMath(a, b);
    } else {
        double a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        runMath(a, b);
    }

    return 0;
}

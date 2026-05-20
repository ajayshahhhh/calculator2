#include <iostream>
#include <string>
#include <stdexcept>

// Partner's function — defined below by partner
int rand();

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) throw std::invalid_argument("Division by zero");
    return a / b;
}

void runMath(double a, double b) {
    std::cout << a << " + " << b << " = " << add(a, b) << "\n";
    std::cout << a << " - " << b << " = " << subtract(a, b) << "\n";
    std::cout << a << " * " << b << " = " << multiply(a, b) << "\n";
    try {
        std::cout << a << " / " << b << " = " << divide(a, b) << "\n";
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}

int main(int argc, char *argv[]) {
    bool useRandom = (argc >= 2 && std::string(argv[1]) == "-r");

    double a, b;
    if (useRandom) {
        a = rand();
        b = rand();
        std::cout << "Using random numbers: " << a << " and " << b << "\n";
    } else {
        std::cout << "Enter two numbers: ";
        std::cin >> a >> b;
    }

    runMath(a, b);
    return 0;
}

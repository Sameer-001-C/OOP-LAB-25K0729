/*
COMBINED TASK (TEMPLATES + EXCEPTION HANDLING)
Task Description:
Develop a Generic Calculator System using:

? Templates
? Exception Handling

Requirements:
Accept two numbers (any type)

Perform:

Addition
Subtraction
Multiplication
Division
Handle:

Division by zero exception
Invalid inputs
*/
#include <iostream>

using namespace std;

template <typename T>
class Calculator {
private:
    T num1;
    T num2;

public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 == 0) {
            throw "Error: Division by zero is not allowed.";
        }
        return num1 / num2;
    }
};

int main() {
    double num1, num2;

    try {
        cout << "Enter first number: ";
        if (!(cin >> num1)) {
            throw "Error: Invalid input. Numeric value expected.";
        }

        cout << "Enter second number: ";
        if (!(cin >> num2)) {
            throw "Error: Invalid input. Numeric value expected.";
        }

        Calculator<double> calc(num1, num2);

        cout << "Addition: " << calc.add() << endl;
        cout << "Subtraction: " << calc.subtract() << endl;
        cout << "Multiplication: " << calc.multiply() << endl;
        cout << "Division: " << calc.divide() << endl;

    } catch (const char* errorMessage) {
        cout << errorMessage << endl;
    }

    return 0;
}


/*
EXERCISE 2
Create a class template Calculator that performs:

Addition
Subtraction
Multiplication
Division
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
        return num1 / num2;
    }
};

int main() {
    Calculator<int> intCalc(20, 4);
    
    cout << intCalc.add() << endl;
    cout << intCalc.subtract() << endl;
    cout << intCalc.multiply() << endl;
    cout << intCalc.divide() << endl;

    cout << "-----------------------------------" << endl;

    Calculator<double> doubleCalc(15.5, 2.5);
    
    cout << doubleCalc.add() << endl;
    cout << doubleCalc.subtract() << endl;
    cout << doubleCalc.multiply() << endl;
    cout << doubleCalc.divide() << endl;

    return 0;
}

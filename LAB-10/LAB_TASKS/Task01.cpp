/*
LAB TASK 1
Create a program using function templates that:
Accepts two numbers
Returns:

Sum
Difference
Product
*/
#include <iostream>

using namespace std;

template <typename T>
T getSum(T a, T b) {
    return a + b;
}

template <typename T>
T getDifference(T a, T b) {
    return a - b;
}

template <typename T>
T getProduct(T a, T b) {
    return a * b;
}

int main() {
    int num1 = 15;
    int num2 = 5;

    cout << getSum(num1, num2) << endl;
    cout << getDifference(num1, num2) << endl;
    cout << getProduct(num1, num2) << endl;

    double d1 = 10.5;
    double d2 = 2.5;

    cout << getSum(d1, d2) << endl;
    cout << getDifference(d1, d2) << endl;
    cout << getProduct(d1, d2) << endl;

    return 0;
}

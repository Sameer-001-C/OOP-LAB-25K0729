/*
Write a function template that returns the minimum of two values.
*/
#include <iostream>

using namespace std;

template <typename T>
T getMin(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    cout << getMin(15, 42) << endl;
    cout << getMin(3.14, 2.71) << endl;
    cout << getMin('z', 'a') << endl;

    return 0;
}

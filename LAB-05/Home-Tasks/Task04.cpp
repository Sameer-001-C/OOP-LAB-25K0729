#include <iostream>
using namespace std;

class Square {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double calculateArea() const {
        return side * side;
    }

    double getSide() const {
        return side;
    }
};

int main() {
    Square s1(5.0);
    Square s2(12.5);

    cout << "Square 1 (Side: " << s1.getSide() << ") Area: " << s1.calculateArea() << endl;
    cout << "Square 2 (Side: " << s2.getSide() << ") Area: " << s2.calculateArea() << endl;

    return 0;
}

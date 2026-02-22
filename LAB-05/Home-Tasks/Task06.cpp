#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;

public:
    Product() : id(0), name("Unknown"), price(0.0) {}

    void input() {
        cout << "Enter Product ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, name);
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << " | Price: $" << price << endl;
    }
};

int main() {
    const int SIZE = 4;
    
    Product shop[SIZE];

    for(int i = 0; i < SIZE; i++) {
        cout << "\n--- Recording Details for Product " << i + 1 << " ---" << endl;
        shop[i].input();
    }

    cout << "\n================ INVENTORY LIST ================" << endl;
    for(int i = 0; i < SIZE; i++) {
        shop[i].display();
    }

    return 0;
}

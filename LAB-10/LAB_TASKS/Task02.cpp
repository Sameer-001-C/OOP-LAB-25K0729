/*
LAB TASK 2
Design a generic array class that:

Stores elements of any type
Displays all elements
Finds maximum value
*/
#include <iostream>

using namespace std;

template <typename T>
class GenericArray {
private:
    T* arr;
    int size;

public:
    GenericArray(T* inputArr, int s) {
        size = s;
        arr = new T[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = inputArr[i];
        }
    }

    ~GenericArray() {
        delete[] arr;
    }

    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    T findMax() {
        T maxVal = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};

int main() {
    int intArr[] = {12, 45, 7, 89, 23};
    GenericArray<int> intArray(intArr, 5);
    
    intArray.display();
    cout << intArray.findMax() << endl;

    cout << "-----------------------------------" << endl;

    double doubleArr[] = {3.14, 9.81, 2.71, 1.618};
    GenericArray<double> doubleArray(doubleArr, 4);
    
    doubleArray.display();
    cout << doubleArray.findMax() << endl;

    return 0;
}

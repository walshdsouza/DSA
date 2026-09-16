#include <iostream>
using namespace std;

// Function Template
template <class T>
void swapValues(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    float p, q;
    char c1, c2;

    // Integer
    cout << "Enter two integers: ";
    cin >> x >> y;
    swapValues(x, y);
    cout << "After swapping: " << x << " " << y << endl;

    // Float
    cout << "\nEnter two floating-point numbers: ";
    cin >> p >> q;
    swapValues(p, q);
    cout << "After swapping: " << p << " " << q << endl;

    // Character
    cout << "\nEnter two characters: ";
    cin >> c1 >> c2;
    swapValues(c1, c2);
    cout << "After swapping: " << c1 << " " << c2 << endl;

    return 0;
}
#include <iostream>
using namespace std;

template <class T>
class Vector {
    T arr[100];
    int n;

public:
    void create() {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void modify() {
        int pos;
        T value;

        cout << "Enter position to modify (1-" << n << "): ";
        cin >> pos;

        if (pos < 1 || pos > n) {
            cout << "Invalid Position\n";
            return;
        }

        cout << "Enter new value: ";
        cin >> value;

        arr[pos - 1] = value;
    }

    void display() {
        cout << "Vector Elements: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Vector<int> v;

    v.create();
    v.display();
    v.modify();
    v.display();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class MyString {
    string str;

public:
    MyString() {
        cout << "Constructor Called\n";
    }

    void input() {
        cout << "Enter String: ";
        cin >> str;
    }

    void concatenate(MyString obj) {
        cout << "\nConcatenated String: " << str + obj.str << endl;
    }

    ~MyString() {
        cout << "Destructor Called\n";
    }
};

int main() {

    MyString *s1 = new MyString();
    MyString *s2 = new MyString();

    s1->input();
    s2->input();

    s1->concatenate(*s2);

    delete s1;
    delete s2;

    return 0;
}
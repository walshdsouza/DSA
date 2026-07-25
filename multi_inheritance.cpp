#include <iostream>
using namespace std;

class Mammal {
public:
    virtual void give_birth() {
        cout << "Giving Birth\n";
    }
};

class Bird {
public:
    void fly() {
        cout << "Flying\n";
    }
};

class Bat : public Mammal, public Bird {
public:
    void give_birth() override {
        cout << "Giving birth while flying\n";
    }
};

int main() {
    Bat b;

    b.fly();
    b.give_birth();

    return 0;
}
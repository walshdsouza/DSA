#include <iostream>
using namespace std;

// Base Class
class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
    }
};

// Derived Class
class Result : public Student {
    int marks;

public:
    void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayResult() {
        displayStudent();

        cout << "\nMarks: " << marks;

        if (marks >= 40)
            cout << "\nResult: Pass";
        else
            cout << "\nResult: Fail";
    }
};

int main() {
    Result r;

    r.getStudent();
    r.getMarks();

    cout << "\n----- Student Details -----";
    r.displayResult();

    return 0;
}
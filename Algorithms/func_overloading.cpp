#include <iostream>
using namespace std;

class Area {
public:

    // Sphere
    void surfaceArea(float radius) {
        cout << "Surface Area of Sphere = "
             << 4 * 3.14 * radius * radius << endl;
    }

    // Cylinder
    void surfaceArea(float radius, float height) {
        cout << "Surface Area of Cylinder = "
             << 2 * 3.14 * radius * (radius + height) << endl;
    }

    // Cuboid
    void surfaceArea(float length, float breadth, float height) {
        cout << "Surface Area of Cuboid = "
             << 2 * (length * breadth + breadth * height + height * length)
             << endl;
    }
};

int main() {

    Area obj;

    float r, h, l, b;

    cout << "Enter Radius of Sphere: ";
    cin >> r;
    obj.surfaceArea(r);

    cout << "\nEnter Radius and Height of Cylinder: ";
    cin >> r >> h;
    obj.surfaceArea(r, h);

    cout << "\nEnter Length Breadth Height of Cuboid: ";
    cin >> l >> b >> h;
    obj.surfaceArea(l, b, h);

    return 0;
}
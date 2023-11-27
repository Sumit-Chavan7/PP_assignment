#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function to calculate area (to be overridden by derived classes)
    virtual float calculateArea() {
        cout << "Area calculation in base class (Shape)" << endl;
        return 0.0;
    }
};

// Derived class 1: Rectangle
class Rectangle : public Shape {
private:
    float length, breadth;
public:
    Rectangle(float l, float b) : length(l), breadth(b) {}

    // Override the virtual function to calculate area for Rectangle
    float calculateArea() override {
        cout << "Area calculation in Rectangle class" << endl;
        return length * breadth;
    }
};

// Derived class 2: Circle
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    // Override the virtual function to calculate area for Circle
    float calculateArea() override {
        cout << "Area calculation in Circle class" << endl;
        return 3.14 * radius * radius;
    }
};

int main() {
    // Create objects of derived classes
    Rectangle rect(5.0, 3.0);
    Circle circle(4.5);

    // Call the overridden virtual function to calculate areas
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;
    cout << "Area of Circle: " << circle.calculateArea() << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    string name;

    // Function Overloading: same name, different parameters
    void speak() {
        cout << name << " makes a sound." << endl;
    }

    void speak(string sound) {
        cout << name << " says: " << sound << endl;
    }

    // Will be overridden
    void showType() {
        cout << "This is an Animal." << endl;
    }
};

// Derived class demonstrating Function Overriding
class Dog : public Animal {
public:
    // Function overriding (same name, same signature as base class)
    void showType() {
        cout << "This is a Dog." << endl;
    }
};

// Class to demonstrate Operator Overloading
class Point {
public:
    int x, y;

    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }

    // Operator Overloading for +
    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Function Overloading
    Animal a;
    a.name = "Generic Animal";
    a.speak();                 // No argument
    a.speak("Roar");           // With argument

    // Function Overriding
    Dog d;
    d.name = "Buddy";
    d.showType();              // Calls overridden version in Dog

    // Operator Overloading
    Point p1(2, 3), p2(4, 5);
    Point p3 = p1 + p2;        // Uses overloaded + operator
    p3.display();              // Output: Point(6, 8)

    return 0;
}

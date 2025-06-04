#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

// Rectangle is a concrete shape
class Rectangle : public Shape {
protected:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    double getWidth() const { return width; }
    double getHeight() const { return height; }

    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }
};

// Square is a separate shape with equal sides
class Square : public Shape {
protected:
    double size;

public:
    Square(double s) : size(s) {}

    double area() const override {
        return size * size;
    }

    double getSize() const { return size; }
    void setSize(double s) { size = s; }
};

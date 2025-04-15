#pragma once
#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r = 1.0) : radius(r) {}

    std::string draw() const override {
        return "Drawing Circle";
    }

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

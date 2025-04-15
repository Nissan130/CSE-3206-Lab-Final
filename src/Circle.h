#pragma once
#include "Shape.h"
#include <iostream>
#include <cmath>
using namespace std;

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r = 1.0) : radius(r) {}

    void draw() override {
        cout << "Drawing Circle\n";
    }

    double area() const override {
        return 3.1416 * radius * radius;
    }
};

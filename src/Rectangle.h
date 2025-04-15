#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w = 2.0, double h = 3.0) : width(w), height(h) {}

    void draw() override {
        cout << "Drawing Rectangle\n";
    }

    double area() const override {
        return width * height;
    }
};

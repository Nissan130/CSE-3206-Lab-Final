#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Square : public Shape {
    private:
    double length;
public:
    Square(double l = 2.0): length(l){}
    void draw() override {
        cout << "Drawing Square\n";
    }
    double area() const override {
        return length * length;
    }
};

#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Square : public Shape {
    private:
    double length;
public:
    Square(double a = 2.0): length(a){}
    std::string draw() const override {
        return "Drawing Circle";
    }
    double area() const override {
        return length * length;
    }
};

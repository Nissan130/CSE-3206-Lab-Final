#pragma once
#include <memory>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include<iostream>
using namespace std;

class ShapeFactory {
public:
    static unique_ptr<Shape> createShape(const string& type) {
        if (type == "circle") {
            return make_unique<Circle>();
        } else if (type == "square") {
            return make_unique<Square>();
        } else if (type == "rectangle") {
            return make_unique<Rectangle>();
        }
        return nullptr;
    }
};

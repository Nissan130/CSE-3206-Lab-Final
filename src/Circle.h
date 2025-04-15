
#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    std::string draw() override {
        return "Drawing Circle";
    }
};

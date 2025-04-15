#pragma once
#include <string>

class Shape {
public:
    virtual std::string draw() const = 0;  // changed from void to std::string
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

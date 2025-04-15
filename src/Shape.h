// #pragma once
// #include <string>

// class Shape {
// public:
//     virtual std::string draw() = 0;
//     virtual ~Shape() = default;
// };

#pragma once
#include <string>
#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual double area() const = 0;  
    virtual ~Shape() = default;
};

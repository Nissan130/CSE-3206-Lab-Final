// #pragma once
// #include <memory>
// #include <string>
// #include "Shape.h"
// #include "Circle.h"
// #include "Square.h"
// #include "Rectangle.h"
// #include<iostream>
// using namespace std;

// class ShapeFactory {
// public:
//     static unique_ptr<Shape> createShape(const string& type) {
//         if (type == "circle") {
//             return make_unique<Circle>();
//         } else if (type == "square") {
//             return make_unique<Square>();
//         } else if (type == "rectangle") {
//             return make_unique<Rectangle>();
//         }
//         return nullptr;
//     }
// };


#pragma once
#include <memory>
#include <string>
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

class ShapeFactory {
public:
    static unique_ptr<Shape> createShape(const string& type, double a = 1.0, double b = 1.0) {
        if (type == "circle") {
            return make_unique<Circle>(a); // 'a' = radius
        } else if (type == "square") {
            return make_unique<Square>(a); // 'a' = side
        } else if (type == "rectangle") {
            return make_unique<Rectangle>(a, b); // 'a' = width, 'b' = height
        }

        cout << "Unknown shape type: " << type << endl;
        return nullptr;
    }
};

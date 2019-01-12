#include <iostream>
#include "shapes.h"
using namespace std;

Shape::Shape(double width, double height) {
    _width = width;
    _height = height;
}

Triangle::Triangle(double width, double height):Shape(width, height) {
}

double Triangle::getArea() {
    double ta;
    ta = (_width * _height)/2;
    cout << ta << endl;   
    return ta;
}

Rectangle::Rectangle(double width, double height):Shape(width, height) {
}

double Rectangle::getArea() {
    double ra;
    ra = _width * _height;
    cout << ra << endl;
    return ra;
}

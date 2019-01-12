#include <iostream>
#include <string>
#include "print_shape.h"
#define PI 3.141592
using namespace std;

Circle::Circle(double radius) {
    _radius = radius;
}

double Circle::getArea() {
    double ca;
    ca = PI * _radius * _radius;
    return ca;
}

double Circle::getPerimeter() {
    double cp;
    cp = 2 * PI * _radius;
    return cp;
}

string Circle::getTypeString() {
    return "Circle";
}

Rectangle::Rectangle(double width, double height) {
    _width = width;
    _height = height;
}

double Rectangle::getArea() {
    double ra;
    ra = _width * _height;
    return ra;
}

double Rectangle::getPerimeter() {
    double rp;
    rp = 2 * _width + 2 * _height;
    return rp;
}

string Rectangle::getTypeString() {
    return "Rectangle";
}

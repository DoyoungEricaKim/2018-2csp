#include <iostream>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(int width, int height){
    _width = width;
    _height = height;
}

int Rectangle::getArea() {
    int a;
    a = _width * _height;
    return a;
}

int Rectangle::getPerimeter() {
    int p;
    p = (2*_width) + (2*_height);
    return p;
}

Square::Square(int width):Rectangle(width, width){
}

void Square::print() {
    int a, p;
    a = getArea();
    p = getPerimeter();
    cout << _width << "X" << _width << " Square" << endl;
    cout << "Area: " << a << endl;
    cout << "Perimeter: " << p << endl;
}

NonSquare::NonSquare(int width, int height):Rectangle(width, height) {
}

void NonSquare::print() {
    int a, p;
    a = getArea();
    p = getPerimeter();
    cout << _width << "X" << _height << " NonSquare" << endl;
    cout << "Area: " << a << endl;
    cout << "Perimeter: " << p << endl;
}

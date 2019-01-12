#include <iostream>
#include "number.h"

int Square::getSquare() {
    int n, s;
    n = Number::getNumber();
    s = n*n;
    return s;
}

int Cube::getCube() {
    int n, c;
    n = Number::getNumber();
    c = n*n*n;
    return c;
}
